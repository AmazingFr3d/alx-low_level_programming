#include "lists.h"

/**
 * pre_main - Prints a quote before the main function is executed.
 *
 * Return: None.
 */

void __attribute__ ((constructor)) pre_main()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
