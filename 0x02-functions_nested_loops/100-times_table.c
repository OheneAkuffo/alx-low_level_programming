#include "main.h"

/**
 * print_times_table - print out timetable
 * @n: number of times to be printed
 *
 * Description: A function that prints the n times table, starting with 0.
 */
void print_times_table(int n)
{
	int i, j;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar('0');
			for (j = 1; j <= n; j++)
				putformat(i * j);
			_putchar('\n');
		}
	}
}

/**
 * putformat - format output
 * @n: input parameter
 *
 * Description: Formats and outputs the given number.
 */
void putformat(int n)
{
	if (n <= 9)
	{
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		_putchar(' ');
		_putchar(n + '0');
	}
	else if (n > 9 && n <= 99)
	{
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		_putchar(n / 10 + '0');
		_putchar(n % 10 + '0');
	}
	else
	{
		_putchar(',');
		_putchar(' ');
		_putchar(n / 100 + '0');
		_putchar(n / 10 % 10 + '0');
		_putchar(n % 10 + '0');
	}
}
