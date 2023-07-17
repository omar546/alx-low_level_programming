# 0x0E. C - Structures, typedef

Welcome to the "0x0E. C - Structures, typedef" repository! This project focuses on the concept of structures and typedef in the C programming language. Structures provide a way to group different data types together, creating a custom data type with its own members. The typedef keyword is used to create custom aliases for existing data types, enhancing code readability and maintainability.

## Table of Contents

- [Introduction](#introduction)
- [Getting Started](#getting-started)
- [Structures](#structures)
- [Typedef](#typedef)
- [Passing Structures to Functions](#passing-structures-to-functions)

## Introduction

In C, structures are used to group related data together under a single name. Each member of a structure can have its own data type, and by using structures, you can create more complex data types to represent entities with multiple attributes.

The typedef keyword, on the other hand, allows you to define new names (aliases) for existing data types. This can make your code more readable and easier to maintain, especially when dealing with complex data structures.

This repository contains various C programs that demonstrate the usage of structures and typedef, showcasing their practical applications.

## Getting Started

To explore the contents of this repository, follow these steps:

1. Clone the repository to your local machine:

```bash
git clone https://github.com/your-username/0x0E-C-Structures-typedef.git
```

2. Navigate to the project directory:

```bash
cd 0x0E-C-Structures-typedef
```

3. Browse through the different C files to understand the implementation and usage of structures and typedef.

## Structures

Structures allow you to create custom data types that can hold multiple variables of different data types. The syntax for defining a structure is as follows:

```c
struct MyStruct {
    data_type member1;
    data_type member2;
    // ... additional members
};
```

Example:

```c
struct Point {
    int x;
    int y;
};
```

You can then create variables of the structure type and access their members using the dot notation:

```c
struct Point p1;
p1.x = 10;
p1.y = 5;
```

## Typedef

The typedef keyword allows you to create custom aliases for existing data types, making your code more readable and concise. The syntax for typedef is as follows:

```c
typedef existing_data_type new_type_name;
```

Example:

```c
typedef unsigned int uint;
```

Now, you can use `uint` instead of `unsigned int` throughout your code:

```c
uint x = 42;
```

## Passing Structures to Functions

You can pass structures as arguments to functions, allowing you to modify their contents or perform operations on them. This is done by passing the structure either by value or by reference.

Example:

```c
struct Rectangle {
    int length;
    int width;
};

void initializeRectangle(struct Rectangle *rect, int l, int w) {
    rect->length = l;
    rect->width = w;
}
```


---

Thank you for exploring the "0x0E. C - Structures, typedef" repository. We hope these examples help you understand the power and usefulness of structures and typedef in the C programming language. If you have any questions or suggestions, please feel free to contact us. Happy coding!