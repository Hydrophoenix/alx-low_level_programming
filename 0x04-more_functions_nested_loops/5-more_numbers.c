#include "main.h"

/**
 * more_numbers - prints 10 times numbers from 0 to 14
 *
 * Return: 0
 */
void more_numbers(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		for (n = 0; n <= 14; n++)
		{
			putchar(n);
		}
		putchar('\n');
	}
	putchar('\n');
	return (0);
}
