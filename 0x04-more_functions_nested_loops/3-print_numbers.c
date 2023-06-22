#include "main.h"

/* Function declaration for _putchar */
int _putchar(char c);
/**
 * print_numbers - print number from 0 to 9
 * Description: function that prints the numbers, from 0 to 9
 */

void print_numbers(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
