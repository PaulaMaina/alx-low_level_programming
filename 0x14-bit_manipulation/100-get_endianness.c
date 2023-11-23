#include "main.h"

/**
 * get_endianness - checks the endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	unsigned int i = 0x76543210;
	char *s = (char *) &i;

	if (*s == 0x10)
		return (1);

	return (0);
}
