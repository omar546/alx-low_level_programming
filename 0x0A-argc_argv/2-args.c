#include <stdlib.h>
#include <stdio.h>

/**
 * main - print all args received
 *
 * @argc: holds n of args passed
 * @argv: array pointer that holds args passed
 *
 * Return: Always 0 (Success)
*/

int main(int argc, char *argv[])
{
	int j;

	for (j = 0; j < argc; j++)
		printf("%s\n", argv[j]);
	return (0);
}
