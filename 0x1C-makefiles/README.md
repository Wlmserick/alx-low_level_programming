# C Project with Makefiles

### 1. Modular Structure

- **Source Files**: Organize your project into multiple `.c` source files, each containing a specific module or functionality.
- **Header Files**: Declare function prototypes and structure definitions in `.h` header files to share across source files.

### 2. Makefile

- **Automatic Compilation**: Define compilation rules and dependencies in the `Makefile` to automatically compile source files into object files and link them into an executable.
- **Clean Target**: Implement a `clean` target to remove object files and the executable, allowing for a clean build environment.

### 3. Customization

- **Compiler Options**: Customize compiler options such as optimization level (`-O3`), warnings (`-Wall`), and debugging symbols (`-g`) to suit your project requirements.
- **Variable Definitions**: Define variables for compiler (`CC`), compiler flags (`CFLAGS`), and linker (`LD`) to easily modify build settings.
   ```
   make
   ```

4. **Run the Executable**:

   Execute the generated binary to run the program.

   ```
   ./program
   ```

5. **Clean Build Environment**:

   To remove object files and the executable, use the `clean` target.

   ```
   make clean
   ```

## Project Structure

```
c-makefiles/
│
├── src/
│   ├── main.c
│   ├── module1.c
│   └── module2.c
│
├── include/
│   ├── module1.h
│   └── module2.h
│
├── Makefile
└── README.md
```

