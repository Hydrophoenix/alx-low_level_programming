#include <stdio.h>
/**
 * main - prints the alphabet in lowercase
 *
 * Description: using the main and putchar functions
 * Return: 0
 */
int main(void)
{
	char abc;
	for (abc = 'a'; abc <= 'z'; abc++)
	{
		putchar(abc);
	}
	putchar('\n');
	return (0);
}


