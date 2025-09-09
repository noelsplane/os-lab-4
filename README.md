# Operating Systems Lab 4: Process Management

This lab focuses on understanding process management in Unix-like operating systems using C programming. You'll work with fork() and exec() system calls to create and manage processes.

## Setup
1. Ensure you are using Ubuntu (or a compatible Linux distribution)
2. Install the necessary development tools:
   ```bash
   sudo apt update && sudo apt install build-essential
   ```

## Exercises

### Exercise 1: Basic Fork
Create a simple parent-child process relationship using fork(). Run the program using:
```bash
gcc exercise1.c -o exercise1
./exercise1
```

### Exercise 2: Parent-Child-Grandchild Process
Extend Exercise 1 to create a grandchild process. Run the program using:
```bash
gcc exercise2.c -o exercise2
./exercise2
```

### Exercise 3: Multiple Children from One Parent
Create multiple child processes from a single parent. Run the program using:
```bash
gcc exercise3.c -o exercise3
./exercise3
```

### Exercise 4: Using Exec to Run Another Program
Learn how to use exec() to run other programs. Run the program using:
```bash
gcc exercise4.c -o exercise4
./exercise4
```

## Notes
- Make sure to compile and run these programs in a Linux environment
- Each exercise builds upon concepts from the previous ones
- Use getpid() to get the process ID of the current process
