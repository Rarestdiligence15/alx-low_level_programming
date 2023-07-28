#include <stdio.h>
/**
 * premain - prints a message before main is executed
 *
 * This function uses the constructor attribute to specify that it should be
 * executed before the main function. It prints a message using the printf
 * function.
 */
void __attribute__ ((constructor)) premain()
{
	printf("You're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");
}
