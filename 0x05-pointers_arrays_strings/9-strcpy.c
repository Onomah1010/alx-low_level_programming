#include "main.h"

/**
 * _stropy - copies the string pionted to by src
 * @dest: dstination
 * @src: source
 * Return: string
 */
char *_stropy(char *dest, char *src)
{
	int len = 0;

	while (*(src + len) != '\0')
	{
		*(dest + len) = *(src + len);
		len++;
	}

	*(dest + len) = '\0';
	return (dest);
}
