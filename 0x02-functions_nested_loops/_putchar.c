#include "main.h"
#include <unistd.h>

/**
 * putchar - writes the character c tp stdout
 * @c: The character to print
 *
 * Return: On success 1
 * on error, -1 is returned, and errno is set appropraitely.
 */
int _putchar(char c)
{
	return	(writer(1, &c, 1));
}
