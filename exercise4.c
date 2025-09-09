#include <stdio.h>
#include <unistd.h>

int main() {
    pid_t pid = fork();
    
    if (pid == 0) {
        // Child process
        printf("Child process about to execute ls command...\n");
        execl("/bin/ls", "ls", "-l", NULL);
        // The following line will only execute if execl fails
        printf("execl failed!\n");
    } else {
        printf("Parent process, PID: %d\n", getpid());
    }

    return 0;
}
