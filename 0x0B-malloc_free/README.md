
### Memory Allocation with `malloc`:

```c
#include <stdlib.h>

// Syntax:
// pointer_type *ptr = (pointer_type *)malloc(size_in_bytes);

// Allocate memory for a single element:
int *int_ptr = (int *)malloc(sizeof(int));

// Allocate memory for an array of elements (e.g., an array of 10 integers):
int *int_array = (int *)malloc(10 * sizeof(int));

// Check if memory allocation was successful:
if (int_ptr == NULL) {
    // Handle allocation failure
    // (malloc returns NULL on failure)
}

// Don't forget to free the allocated memory when done:
free(int_ptr);
free(int_array);
```

### Memory Deallocation with `free`:

```c
#include <stdlib.h>

// Syntax:
// free(ptr);

// Deallocate memory previously allocated with malloc:
free(int_ptr);
free(int_array);

// Always set the pointer to NULL after freeing to avoid using a dangling pointer:
int_ptr = NULL;
int_array = NULL;
```

