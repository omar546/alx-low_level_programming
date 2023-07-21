# 0x10-variadic_functions

Welcome to the `0x10-variadic_functions` repository! This project contains C programs that demonstrate the usage of variadic functions in the C programming language.

## Table of Contents

1. [Introduction](#introduction)
2. [Files](#files)
3. [Usage](#usage)
4. [Functions](#functions)

## Introduction

In C programming, a variadic function is a function that can accept a varying number of arguments. The standard library in C provides a set of macros and functions that allow you to create and handle variadic functions. This repository aims to showcase practical examples of variadic functions and help developers understand their implementation and usage.

## Files

The repository contains the following files:

1. `0-sum_them_all.c`: This file contains a function `sum_them_all` that takes a variable number of arguments and returns their sum.
2. `1-print_numbers.c`: In this file, you will find a function `print_numbers` that prints a given set of numbers separated by a specified separator.
3. `2-print_strings.c`: This file contains the `print_strings` function that prints a set of strings separated by a specified separator.
4. `3-print_all.c`: The `print_all` function in this file can print any type of data, given the format and the necessary arguments.
5. `variadic_functions.h`: This header file contains all the function prototypes and necessary includes for the variadic functions.

## Usage

To use any of the functions in this repository, follow these steps:

1. Clone the repository to your local machine:

```bash
git clone https://github.com/your-username/0x10-variadic_functions.git
```

2. Change your working directory to the cloned repository:

```bash
cd 0x10-variadic_functions
```

3. Compile the C files using your preferred C compiler. For example:

```bash
gcc -Wall -Werror -Wextra -pedantic *.c -o variadic_functions
```

4. Now, you can run the executable and test the functions:

```bash
./variadic_functions
```

## Functions

Here's a brief description of each function in the repository:

1. `sum_them_all`:

   ```c
   int sum_them_all(const unsigned int n, ...);
   ```

   This function takes a variable number of arguments and returns their sum.

2. `print_numbers`:

   ```c
   void print_numbers(const char *separator, const unsigned int n, ...);
   ```

   This function prints a given set of numbers separated by a specified separator.

3. `print_strings`:

   ```c
   void print_strings(const char *separator, const unsigned int n, ...);
   ```

   The `print_strings` function prints a set of strings separated by a specified separator.

4. `print_all`:

   ```c
   void print_all(const char * const format, ...);
   ```

   This function can print any type of data, given the format and the necessary arguments. It supports formats "c" (char), "i" (integer), "f" (float), and "s" (string).
