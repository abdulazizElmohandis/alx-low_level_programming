#include <stdio.h>

/**
 * main - Entry point
 *
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char CH = 'A';
	char ch = 'a';

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
