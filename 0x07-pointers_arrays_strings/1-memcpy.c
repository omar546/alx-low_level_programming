/**
 * _memcpy - function that copies memory area
 *
 * @dest: buffer (the destination)
 * @src: what to copy (source)
 * @n: n bytes of @src
 *
 * Return: Always 0 (Success)
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
