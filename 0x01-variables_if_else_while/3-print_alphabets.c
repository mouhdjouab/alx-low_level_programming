#include <stdio.h>

/**
 * main - Entry point
 *
 * description :a
 *
 * Return: 0
 */
int main(void)
{
	char ch = 'a';

	char CH = 'A';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}

	while (CH <= 'Z')
	{
		putchar(CH);
		CH++;
	}
	putchar('\n');
	return (0);
}
