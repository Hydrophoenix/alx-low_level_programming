#include <stdio.h>

/**
 * main - prints all the letters except q and e
 *
 * Description: using main and putchar functions only
 * Return: 0
 */
int main(void)
{
	char abc;

	for (abc = 'a'; abc <= 'z'; abc++)
	{
		if (abc != 'e' && abc != 'q')
		{
			putchar(abc);
		}
		putchar('\n');
		return (0);
	}
}
