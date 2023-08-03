#include "main.h"

/**
 * flip_bits - Counts n of bits should be
 * flipped to get from a number to another.
 * @n: The number.
 * @m: The number of distnation.
 *
 * Return: n bits to flip to get from n -> m.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m, nbits = 0;

	while (xor > 0)
	{
		nbits += (xor & 1);
		xor >>= 1;
	}

	return (nbits);
}
