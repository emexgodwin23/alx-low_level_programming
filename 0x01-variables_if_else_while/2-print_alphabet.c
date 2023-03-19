#include <stdio.h>
/**
 * main - main fuction
 *
 * Return: always 0 (success)
 */

int main(void)
{
	char letter = 'a';
	int i;

	for (i = 'a' ; i <= 'z' ; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
