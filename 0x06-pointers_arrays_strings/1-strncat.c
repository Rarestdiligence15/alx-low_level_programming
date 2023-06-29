#include "main.h"
#include <stdio.h>
/**
 * _strncat - concatenates two strings
 * @dest: direction of string
 * @src: source of string
 * @n: bytes to be used
 * Return: void
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
