#include "main.h"

/**
 * get_bit - Gets value of a bit at index.
 * @n: The bit.
 * @index: The index to get the value at.
 *
 * Return: error= -1.
 * else= value of the bit.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	if ((n & (1 << index)) == 0)
		return (0);

	return (1);
}
