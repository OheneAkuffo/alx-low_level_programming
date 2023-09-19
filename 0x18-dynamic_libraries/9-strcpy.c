#include "main.h"
/**
 * _strcpy - copies the string
 * Return: the pointer to dest
 * @dest: buffer
 * @src: string pointed to
 */

char *_strcpy(char *dest, char *src)
{
	int a;

	for (a = 0; src[a] != '\0'; a++)
		dest[a] = src[a];
	dest[a] = '\0';
	return (dest);
}
