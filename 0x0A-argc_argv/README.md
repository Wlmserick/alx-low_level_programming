Here's a simple C program that uses `argc` (argument count) and `argv` (argument vector) to print the command-line arguments passed to the program:

```c
#include <stdio.h>

int main(int argc, char *argv[]) {
    printf("Total number of arguments: %d\n", argc);

    // Print each argument
    for (int i = 0; i < argc; i++) {
        printf("Argument %d: %s\n", i, argv[i]);
    }

    return 0;
}
```

When you run this program, it will display the total number of arguments (including the program name itself) and then list each argument individually.
