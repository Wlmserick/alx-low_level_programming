// Function Declaration (Prototype)
return_type function_name(parameter1_type parameter1_name, parameter2_type parameter2_name, ...);

// Function Definition
return_type function_name(parameter1_type parameter1_name, parameter2_type parameter2_name, ...) {
    // Function body
    // Statements to perform some task
    return return_value; // Optional return statement
}

// Function Call
return_value = function_name(argument1, argument2, ...);

// Function Example
int add(int a, int b) {
    return a + b;
}

int main() {
    int result = add(3, 4); // result is now 7
    return 0;
}

for (initialization; condition; increment/decrement) {
    // Loop body
    // Statements to be executed repeatedly
}

while (condition) {
    // Loop body
    // Statements to be executed as long as the condition is true
}

do {
    // Loop body
    // Statements to be executed at least once, then as long as the condition is true
} while (condition);

Loop Control Statements:
break: Exit the loop prematurely.
continue: Skip the current iteration and proceed to the next iteration

for (int i = 0; i < rows; i++) {
    for (int j = 0; j < columns; j++) {
        // Nested loop body
        // Statements to work with 2D arrays or perform nested iterations
    }
}

// Function Pointer Declaration
return_type (*function_ptr)(parameter1_type, parameter2_type, ...);

// Assign a Function to a Function Pointer
function_ptr = &function_name; // or just function_ptr = function_name;

// Call a Function Using a Function Pointer
return_value = (*function_ptr)(argument1, argument2, ...);

