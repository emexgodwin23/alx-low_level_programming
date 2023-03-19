#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - main function
 *
 * Return: always 0
 */

int main(void)
{
	int a;

	for (a = 'a'; a <= 'z' ; a++)
	{
		if (a != 'e' && a != 'q')
			putchar(a);
	}
	putchar('\n');
	return (0);
}
