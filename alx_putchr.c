#include "main.h"
/**
 * putchr - print a character
 * @a: char input
 * Return: 1
 */
int alx_putchr(char a)
{
	return (write(1, &a, 1));
}
