#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <string.h>

int main() {
    char command[256];
    
    while (1) {
        printf("myshell> ");
        fgets(command, sizeof(command), stdin);
        command[strcspn(command, "\n")] = 0;  // Remove newline character
        
        if (strcmp(command, "exit") == 0) {
            break;
        }
        
        pid_t pid = fork();
        if (pid == 0) {
            // Child process
            execlp(command, command, NULL);
            // If execlp fails
            printf("Command execution failed!\n");
            exit(1);
        } else {
            // Parent process
            wait(NULL);
        }
    }
    return 0;
}
