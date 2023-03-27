/**
 * rev_string - reverses a string
 *
 * @s: string parameter input
 *
 * Return: Nothing
*/

void rev_string(char *s)
{
	int len, indx;
	char ch;

	/*find string length without null char*/
	for (len = 0; s[len] != '\0'; ++len)
		;

	/*swap the string by looping to half the string*/
	for (indx = 0; indx < len / 2; ++indx)
	{
		ch = s[indx];
		s[indx] = s[len - 1 - indx]; /*-1 because the array starts from 0*/
		s[len - 1 - indx] = ch;
	}

}
