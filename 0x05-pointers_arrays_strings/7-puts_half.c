#include"main.h"

/**
 * puts_half - prints half of a string
 *
 * @str: string parameter input
 *
 * Return: Nothing
*/

void puts_half(char *str)
{
	int len, indx;

	for (len = 0; str[len] != '\0'; ++len)
		;

	if (len % 2 == 0)
	{
		for (indx = len / 2; str[indx] != '\0'; ++indx)
			_putchar(str[indx]);
	} else
	{
		for (indx = ((len - 1) / 2) + 1; str[indx] != '\0'; ++indx)
			_putchar(str[indx]);
	}
	_putchar('\n');
}
