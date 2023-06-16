#include <stdio.h>
/**
 *main - entry point
 *Return: always 0
 */
int main(void)
{
	int b;

	for (b = 48; b <= 57; b++)
	{
	putchar(b);
	if (b == 57)
	{
		continue;
	}
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}


