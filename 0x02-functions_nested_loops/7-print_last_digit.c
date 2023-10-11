#include"main.h"

/**
 * * print_last_digit - print last digit of a number.
 *
 * @n: takes number input
 * Return: lastDigit
*/

int print_last_digit(int n)
{
	int lastDigit;

	if (n < 0)
		lastDigit = (n % 10) * -1;
	else
		lastDigit = n % 10;

	_putchar('0' + lastdigit);
	return (lastDigit);
}
