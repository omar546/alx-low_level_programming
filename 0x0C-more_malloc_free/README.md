# 0x0C-more_malloc_free

This repository contains solutions to the tasks assigned in the **0x0C-more_malloc_free** project of the Holberton School curriculum.

## Description
The **0x0C-more_malloc_free** project focuses on advanced memory allocation and deallocation in the C programming language. It explores additional concepts related to dynamic memory management using the `malloc`, `free`, `calloc`, and `realloc` functions.

The project includes various tasks that involve dynamic memory allocation, string manipulation, and bitwise operations. Each task comes with its own set of requirements and constraints, challenging the programmer to implement efficient solutions while adhering to specific guidelines.

## Project Files
The following files are included in this repository:

### `main.h`
This header file contains the function prototypes used in the project.

### `0-malloc_checked.c`
This file contains the implementation of the `malloc_checked` function, which allocates memory using `malloc` and checks if the allocation was successful.

### `1-string_nconcat.c`
The `1-string_nconcat.c` file implements the `string_nconcat` function, which concatenates `n` bytes of one string with another string.

### `2-calloc.c`
This file contains the implementation of the `calloc` function, which allocates memory for an array using `malloc` and initializes the allocated memory to zero.

### `3-array_range.c`
The `3-array_range.c` file implements the `array_range` function, which creates an array of integers containing a range of values.

## Usage
To compile the C files in this repository, you can use the following command:

```
gcc -Wall -Werror -Wextra -pedantic <file.c> -o <output>
```

Replace `<file.c>` with the name of the file you want to compile, and `<output>` with the desired name of the output executable.

For example, to compile `0-malloc_checked.c`, you would use the following command:

```
gcc -Wall -Werror -Wextra -pedantic 0-malloc_checked.c -o malloc_checked
```

After compiling, you can run the program using `./<output>`. For example:

```
./malloc_checked
```
