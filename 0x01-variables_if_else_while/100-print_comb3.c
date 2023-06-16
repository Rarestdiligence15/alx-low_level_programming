#include <stdio.h>
/**
 *main - entry point
 *Return: 0
 */
int main(void)
{
	int i, j;
	int count = 0; /* Keep track of the number of combinations */

	for (i = 0; i < 10; i++)
	{
		for (j = i + 1; j < 10; j++)
		{
			if (count > 0)
			{
				putchar(',');
				putchar(' ');
			}
			putchar(i + '0');
			putchar(j + '0');
			count++;
		}
	}

	putchar('\n');

	return (0);
}

