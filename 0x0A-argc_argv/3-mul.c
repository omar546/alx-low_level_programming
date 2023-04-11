#include <stdlib.h>
#include <stdio.h>

/**
 * main - mult* args passed
 *
 * @argc: holds n args passed
 * @argv: array pointer that holds args passed
 *
 * Return: Always 0 (Success)
*/

int main(int argc, char *argv[])
{
	int m;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		m = (atoi(argv[1]) * atoi(argv[2]));
		printf("%d\n", m);
	}
	return (0);
}
