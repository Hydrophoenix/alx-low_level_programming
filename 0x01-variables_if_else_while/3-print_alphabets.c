#include <stdio.h>

/**
 * main - prints the alphatbets in lowercase and then in uppercase
 *
 * Description: this program uses the main and putchar functions
 * Return: 0
 */
int main(void)
{
	char abc;
	char ABC;

	for (abc = 'a'; abc <= 'z'; abc++)
	{
		putchar(abc);
	}
	for (ABC = 'A'; ABC <= 'Z'; ABC++)
	{
		putchar(ABC);
	}
	putchar('\n');
	return (0);
}
