#include"main.h"

/**
 * _islower - description
 * Return: returns 1 if `c` is lowercase
 *         otherwise always 0 (Success)
 *  * @c: checks input of function
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);

	return (0);
}
