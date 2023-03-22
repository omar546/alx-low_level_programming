#include "main.h"
/**
 * print_last_digit - print last digit of n.
 * @n: the input number.
 * Return: last digit of n.
 */
int print_last_digit(int n)
{
int last = n % 10;
_putchar(last);
return (last);
}
