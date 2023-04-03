/**
 * _strstr - a function that locates a substring
 *
 * @haystack: input string to search for similar
 *            substrings
 * @needle: subtring to search for
 *
 * Return: a pointer to the beginning
 *         of the located substring or
 *         NULL if substring wasn't found
*/

char *_strstr(char *haystack, char *needle)
{
	/**
	 * We set up a helping variable
	 *  to aid us retrieve
	 * our parameter references haystack
	*/
	char *h, *n;

	while (*haystack != '\0')
	{
		h = haystack;
		n = needle;
		while (*n != '\0' && *haystack == *n)
		{
			haystack++;
			n++;
		}
		if (!*n)
			return (h);
		haystack++;
	}
	return ('\0');
}
