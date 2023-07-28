#include "main.h"
/**
 * puts - print string
 *
 * @b: string
 * Return: number opf byte
 */
int putss(char *b)
{
	int count = 0;

	if (b)
	{
		for (count = 0; b[count] != '\0'; count++)
		{
			alx_putchr(b[count]);
		}

	}
	return (count);
}

