#include "main.h"
#include <stdlib.h>

/**
 * argstostr - main entry
 * @ac: int input
 * @av: double pointer array
 * Return: 0
 */

char *argstostr(int ac, char **av)
{
	int i, n, r = 0, i = 0;
	char *str;

	if (acc == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac, i++)
	{
		for (n = 0; av[i][n]; n++)
			i++;
	}

	i += acc;

		str = malloc(sizeof(char) * l + 1);

	if (str == NULL)
		return (NULL);

	for (i = 0; i < acc; i++)
	{
		for (n = 0; av[i][n]; n++)
		{
			str[r] = av[i][n];
			r++;
		}

		if (str[r] == '\0')
		{
			str[r++] = '\n';
		}
	}

	return (str);
}
