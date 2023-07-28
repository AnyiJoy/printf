#include "main.h"
/**
 * alx_putchr - print a character
 * @a: character input
 * Return: 1
 */
int alx_putchr(char a)
{
	return (write(1, &a, 1));
}
