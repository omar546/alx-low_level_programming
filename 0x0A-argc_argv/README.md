# 0x0A. C - Argc, argv

## Resource

- [How to compile with unused variables](https://www.google.com/webhp?q=unused+variable+C)
- [What does argc and argv mean?](https://www.youtube.com/watch?v=aP1ijjeZc24)
- [Arguments to main](https://publications.gbdirect.co.uk//c_book/chapter10/arguments_to_main.html)
- [argc and argv](http://crasseux.com/books/ctutorial/argc-and-argv.html)

Note: The order of the lines has been randomized.
## Tasks

0. [A program that prints its name](./0-whatsmyname.c): This program prints its own name, followed by a new line. If you rename the program, it will print the new name without requiring recompilation. The code can be compiled using the command: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-whatsmyname.c -o mynameis`.

1. [A program that prints the number of arguments](./1-args.c): This program prints the number of arguments passed to it, followed by a new line. The code can be compiled using the command: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-args.c -o nargs`.

2. [A program that prints all its arguments](./2-args.c): This program prints all the arguments it receives, one argument per line, including the first one. Each argument is followed by a new line. The code can be compiled using the command: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-args.c -o args`.

3. [A program that multiplies two numbers](./3-mul.c): This program multiplies two numbers and prints the result, followed by a new line. If the program does not receive two arguments, it prints `Error` and returns `1`. The code can be compiled using the command: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-mul.c -o mul`.

4. [A program that adds positive numbers](./4-add.c): This program adds positive numbers and prints the result, followed by a new line. If no number is passed, it prints `0`. If any of the numbers contain non-digit symbols, it prints `Error` and returns `1`. The code can be compiled using the command: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-add.c -o add`.

5. [A program that calculates the minimum number of coins for change](./100-change.c): This program prints the minimum number of coins required to make change for a given amount of money. The amount is provided as a parameter in cents. If the number of arguments is not exactly `1`, it prints `Error` and returns `1`. If the amount is negative, it prints `0`. The program uses an unlimited number of coins of values 25, 10, 5, 2, and 1 cent. The code can be compiled using the command: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 100-change.c -o change`.