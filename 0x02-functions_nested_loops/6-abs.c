#include "main.h"
/**
 * _abs - remove negativity.
 * @n: the input number.
 * Return: positive n.
 */
int _abs(int n)
{
if (n > 0)
{
return (n);
}
else if (n < 0)
{
return (-1 * n);
}
else
{
return (0);
}
}
