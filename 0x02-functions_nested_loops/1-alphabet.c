#include "main.h"
/**
 *_putchar - Writes a character to the standard output
 *@c: The character to be written
 *
 *Return: On success, returns the character written. On error, returns -1
 */
static int _putchar(char c)
{
	return write(1, &c, 1);
}

/**
 * print_alphabet - Prints the alphabet in lowercase
 */
void print_alphabet(void)
{
	char v;

	for (v = 97; v <= 'z'; v++)
		_putchar(v);

	_putchar('\n');
}
