#include <unistd.h>

/**
 * _putchar - writes the character
 * @c: The character to write
 *
 * Return: On success  -1 if not
 */

int _putchar(char c)
{
        return (write(1, &c, 1));
}

