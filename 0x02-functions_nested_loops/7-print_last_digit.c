#include "main.h"
#include <limits.h>

/**
 * print_last_digit - print last digit of n.
 * @n: the input number.
 * Return: last digit of n.
 */
int print_last_digit(int n)
{
long nn = n;
int last;
if (nn < 0)
nn = -nn;
last = nn % 10;
_putchar('0' + last);
return (last);
}
