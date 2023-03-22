#include "main.h"
/**
* print_alphabet_x10- prints the alphabet in lowercase X10 times,
*followed by a new line..
*/
void print_alphabet_x10(void)
{
char letter;
int i;
for (i = 0 ; i < 11 ; i++)
{
for (letter = 'a'; letter <= 'z'; letter++)
_putchar((char)letter);
_putchar('\n');
}
}
