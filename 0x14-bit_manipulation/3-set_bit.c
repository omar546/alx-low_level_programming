#include "main.h"

/**
 * set_bit - Sets a bit at index = 1.
 * @n: points to the bit.
 * @index: The index to set the value at.
 *
 * Return: error= -1.
 * else= 1.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n ^= (1 << index);

	return (1);
}
