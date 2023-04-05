#include "main.h"

/**
 * is_prime - recursion to check if a number is prime
 *
 * @n: number to check
 * @i: integer to divide n by
 *
 * Return: 1 if prime, 0 otherwise
 */
int is_prime(int n, int i)
{
if (n % i == 0) /* if n is divisible by i, it's not prime */
return (0);
if (i == n / 2 + 1) /* base case,reached half of n without finding a divisor */
return (1);
return (is_prime(n, i + 1)); /* increment i and check again */
}

/**
 * is_prime_number - check if a number is prime
 *
 * @n: number to check
 *
 * Return: 1 if prime, 0 otherwise
 */
int is_prime_number(int n)
{
if (n <= 1)  /* 1 and below are not prime */
return (0);
return (is_prime(n, 2)); /* start checking from 2 */
}
