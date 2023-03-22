#include "main.h"
/**
 * print_last_digit - print last digit of n.
 * @n: the input number.
 * Return: always 0.
 */
int print_last_digit(int n)
{
int last = n % 10;
_putchar(last + '0');
return (0);
}
