#include "main.h"
/**
 * islower - check for lower case.
 * @c: input to be checked.
 * Return: 1 if c is lowercase, Returns 0 otherwise.
*/
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}
