/**
 * _memset - a function that fills
 *         memory with a constant byte
 *
 * @s: input pointer to char type
 *    represents the pointer to the
 *    block of memory to fill
 * @b: input variable of char type
 *    represents the character to
 *    fill s
 * @n: unsigned int variable
 *    the number of bytes to fill
 *
 * Return: A pointer to the filled memory
 *        @s
*/

char *_memset(char *s, char b, unsigned int n)
{
	/**
	 * declareing an unsigned int
	 * because we deal with a
	 * value that will always be
	 * zero or positive
	*/
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
