#include "main.h"
/**
 * _strlen_recursion - returns the length of a string
 * @s: pointer to the string
 *
 * Return: the length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
/**
 * _is_palindrome_helper - helper function to check if s is a palindrome
 * @s: pointer to the string to check
 * @len: the length of the string
 *
 * Return: 1 if s is a palindrome, 0 otherwise
 */
int _is_palindrome_helper(char *s, int len)
{
	if (len <= 1)
		return (1);
	if (*s != *(s + len - 1))
		return (0);
	return (_is_palindrome_helper(s + 1, len - 2));
}
/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not
 * @s: pointer to the string to check
 *
 * Return: 1 if s is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	return (_is_palindrome_helper(s, len));
}
