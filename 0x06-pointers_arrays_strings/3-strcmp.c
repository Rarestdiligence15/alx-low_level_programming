#include "main.h"
/**
 * _strcmp - compares two strings.
 * @s1: pointer to first string
 * @s2: pointer to second string
 * Return: If str1 < str2, the negative difference
 * If str1 == str2, 0
 * If str1 > str2, the positive difference of the first unmatched characters
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] == s2[i]; i++)
	{
		if (s1[i] == '\0')
		{
			return (0);
		}
	}
	return (s1[i] - s2[i]);
}
