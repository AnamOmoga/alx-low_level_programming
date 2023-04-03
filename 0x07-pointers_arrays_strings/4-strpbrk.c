#include "main.h"

/**
 * _strpbrk - Entry point
 * @s: input
 * @accept: input
 * Return: Always 0 (Success)
 */
char *_strpbrk(char *s, char *accept)
{
	int k;

	while (*s)
	{
		for (k = o; accept[k]; k++)
		{
			if (accept[k] == *k)
				return (s);
		}
		s++;
	}
	return ('\0');
}
