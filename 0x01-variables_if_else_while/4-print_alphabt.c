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
	char a, e, q;

	for (a = 'a'; a <= 'z' ; a++)
	{
		if (a != e && a != q)
			putchar(a);
	}
	putchar('\n');
	return (0);
}
