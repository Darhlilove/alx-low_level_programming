#include "main.h"

/**
 * argstostr - Concatenates all the arguments of a program.
 *
 * @ac: The number of arguments.
 * @av: An array of strings containing the arguments.
 *
 * Return: A pointer to the concatenated string, or NULL if it fails.
 */
char *argstostr(int ac, char **av)
{
	int total_length = 0, index = 0, i, j;
	char *result;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			total_length++;
			j++;
		}
		total_length++;
	}
	total_length++;

	result = malloc(total_length * sizeof(char));
	if (result == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			result[index] = av[i][j];
			index++;
			j++;
		}
		result[index] = '\n';
		index++;
	}
	result[index] = '\0';

	return (result);
}
