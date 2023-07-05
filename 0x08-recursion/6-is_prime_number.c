#include "main.h"
/**
 * _is_prime_helper - helper function to check if n is prime
 * @n: the number to check
 * @i: the current divisor to try
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int _is_prime_helper(int n, int i)
{
	if (n <= 1)
		return (0);
	if (n % i == 0)
		return (0);
	if (i * i > n)
		return (1);
	return (_is_prime_helper(n, i + 1));
}
/**
 * is_prime_number - returns 1 if the input integer is a prime number,
 * otherwise returns 0
 * @n: the number to check
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_number(int n)
{
	return (_is_prime_helper(n, 2));
}
