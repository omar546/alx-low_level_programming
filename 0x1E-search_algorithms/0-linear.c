#include "search_algos.h"
#include <unistd.h>

/**
 * linear_search
 * @array: array to search the value in
 * @size: size of the array
 * @value: value to look up
 * Return: index or -1
 */
int linear_search(int *array, size_t size, int value)
{
size_t i = 0;

if (!array || size == 0)
return (-1);
while (i < size)
{
printf("Value checked array[%lu] = [%d]\n", i, array[i]);
if (array[i] == value)
return (i);
i++;
}
return (-1);
}
