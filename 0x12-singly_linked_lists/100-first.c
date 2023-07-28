#include <stdio.h>

/*to run statments before the main we need a constructor */
void constructor(void) __attribute__((constract));
/**
 * main_constructor - a function that runs before the main ()
 *
 * Return: void
 */
void constructor(void)
{
  printf("You're beat! and yet, you must allow,\n");
  printf("I bore my house upon my back!\n");
}
