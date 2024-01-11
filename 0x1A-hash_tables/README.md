 **# C Hash Table**

**Hash tables are a powerful data structure that allows for efficient storage and retrieval of data. This implementation provides a C hash table with features such as:**

* **Open addressing with double hashing:** Handles collisions with minimal memory overhead.
* **Dynamic resizing:** Automatically expands the table as needed to maintain performance.
* **Key-value pairs:** Stores arbitrary data types as values.

**## Usage**

1. **Include the header file:**

   ```c
   #include "hash_table.h"
   ```

2. **Create a hash table:**

   ```c
   hash_table_t *table = hash_table_new(initial_size);
   ```

3. **Insert key-value pairs:**

   ```c
   hash_table_insert(table, key, value);
   ```

4. **Retrieve values by key:**

   ```c
   void *value = hash_table_get(table, key);
   ```

5. **Delete key-value pairs:**

   ```c
   hash_table_delete(table, key);
   ```

6. **Free the hash table:**

   ```c
   hash_table_free(table);
   ```

**## Functions**

* **hash_table_new(size):** Creates a new hash table with the given initial size.
* **hash_table_insert(table, key, value):** Inserts a key-value pair into the table.
* **hash_table_get(table, key):** Retrieves the value associated with the given key.
* **hash_table_delete(table, key):** Deletes the key-value pair with the given key.
* **hash_table_free(table):** Frees the memory allocated for the hash table.

**## Additional Information**

* **Hash function:** The hash function used is FNV-1a, a non-cryptographic hash function known for its good distribution and speed.
* **Collision resolution:** Open addressing with double hashing is used to handle collisions.
* **Resizing:** The table is automatically resized when the load factor exceeds a certain threshold.

**## Example**

```c
#include "hash_table.h"

int main() {
    hash_table_t *table = hash_table_new(10);
    hash_table_insert(table, "name", "Bard");
    hash_table_insert(table, "age", "3");
    printf("Name: %s\n", (char *)hash_table_get(table, "name"));
    hash_table_free(table);
    return 0;
}
```

