Here is a cheat sheet for C - Variables, if, else, while:

**Variables**
- Variables are used to store data in a program.
- They have a name and a value.
- The value of a variable can change during the execution of the program.
- The type of a variable determines the kind of data it can store and the operations that can be performed on it.

```c
int x; // declares an integer variable named x
x = 5; // assigns the value 5 to x
```

**If**
- The `if` statement is used to conditionally execute code.
- If the condition is true, the code inside the `if` block is executed.
- If the condition is false, the code inside the `if` block is skipped.

```c
if (x > 0) {
    printf("x is positive\n");
}
```

**Else**
- The `else` statement is used in conjunction with an `if` statement.
- If the condition in the `if` statement is false, the code inside the `else` block is executed.

```c
if (x > 0) {
    printf("x is positive\n");
} else {
    printf("x is not positive\n");
}
```

**While**
- The `while` loop repeatedly executes a block of code as long as a condition is true.
- When the condition becomes false, the loop terminates.

```c
while (x > 0) {
    printf("%d\n", x);
    x--;
}
```
