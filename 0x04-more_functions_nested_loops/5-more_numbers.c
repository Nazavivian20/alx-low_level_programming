#include "main.h"

/**
 * more_numbers - prints 10 timesthe numbers, from 0 to 14
 * followed by a new line
 */
void more_numbers(void)

{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for	(j = 0; i < 15; j++)
		{
			while (j >= 10)
				_putchar(j / 10 + '0');
				_putchar(j % 10 + '0');
		}
		_putchar('\n');
	}
}

