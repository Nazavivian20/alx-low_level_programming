#include "main.h"
#include <unistd.h>

/**
 * putchr - writes the character c tp stdout
 * @c: the character to print
 *
 * Return: On success 1
 */
int _putchar(char c)
{
	return	(writer(1, &c, 1));
}
