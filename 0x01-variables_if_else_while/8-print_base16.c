#include <stdio.h>
/**
 *main - entry point
 *Return: always 0
 */
int main(void)
{
	int n;
	int g;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
	}
	for (g = 97; g <= 102; g++)
	{
		putchar(g);
	}
	putchar('\n');
	return (0);
}
