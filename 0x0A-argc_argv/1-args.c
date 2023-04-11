#include <stdlib.h>
#include <stdio.h>

/**
 * main - print n args
 *
 * @argc: holds n args passed
 * @argv: array pointer that holds args passed
 *
 * Return: Always 0 (Success)
*/

int main(int argc, char __attribute__((unused)) *argv[])
{
	int j = 0, m;

	while (j < argc)
	{
		m = j;
		j++;
	}
	printf("%d\n", m);
	return (0);
}
