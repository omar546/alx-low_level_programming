#include "main.h"
/**
 * _isalpha - checks for alphabetic character character.
 * @c: the input to checked
 * Return: 1 if the input c is alphabetic 0 otherwise
 */
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
return (1);
else
return (0);
}
