# 0x0B. C - malloc, free

This repository contains solutions to various programming tasks in the C language related to dynamic memory allocation using `malloc` and `free` functions.

## Description

In this project, we explore the concepts of dynamic memory allocation in C using the `malloc` and `free` functions. Dynamic memory allocation allows us to allocate memory at runtime, which is useful when the size of data needed is not known beforehand or when we want to allocate memory for data structures dynamically.

The tasks in this project cover a range of topics related to `malloc` and `free`, including:

- Allocating memory for different data types
- Calculating the size of allocated memory blocks
- Reallocating memory using `realloc`
- Freeing allocated memory to avoid memory leaks
- Understanding the relationship between pointers and allocated memory

Each task is designed to reinforce the understanding and usage of `malloc` and `free` functions, as well as to enhance problem-solving skills in the C language.

## Files

The project contains the following files:

- **holberton.h:** Header file that contains function prototypes.
- **0-create_array.c:** Function that creates an array of characters and initializes it with a specific character.
- **1-strdup.c:** Function that returns a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter.
- **2-str_concat.c:** Function that concatenates two strings.
- **3-alloc_grid.c:** Function that returns a pointer to a 2-dimensional array of integers.
- **4-free_grid.c:** Function that frees a 2-dimensional grid previously created by the `alloc_grid` function.
- **5-argstostr.c:** Function that concatenates all the arguments of a program into a single string.
- **100-strtow.c:** Function that splits a string into words.

## Getting Started

To compile the C files in this project, you can use the following command:

```
gcc -Wall -Werror -Wextra -pedantic *.c -o executable_name
```

Replace `executable_name` with the desired name for the compiled program.

## Usage

After compiling, you can run the program by executing the compiled executable:

```
./executable_name
```

Follow the prompts or observe the output to interact with the program and view the results.

