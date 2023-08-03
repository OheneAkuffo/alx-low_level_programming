#include "main.h"

/**
 * get_endianness - checks the edianess in the project
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	int n = 1;

	char *c = (char *)&n;

	if (*c)
		return (1);
	return (0);
}
