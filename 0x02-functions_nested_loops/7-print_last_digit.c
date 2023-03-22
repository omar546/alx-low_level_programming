#include "main.h"
/**
 * print_last_digit - print last digit of n.
 * @n: the input number.
 * Return: last digit of n.
 */
int print_last_digit(int n)
{
int last;
if (n < 0)
n = -n;
last = n % 10;
_putchar('0' + last);
return (last);
}
