#include <stdio.h>
/**
 * main - prints all the alphabet in lowercase.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char alph = 'a';

	while (alph <= 'z')
	{
		putchar(alph);
		alph++;
	}
	putchar('\n');
	return (0);
}
