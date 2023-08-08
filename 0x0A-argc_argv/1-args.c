#include <stdio.h>
#include "main.h"

/**
 * main - Entry point of the program
 *
 * @argc: The number of command-line arguments
 * @argv: An array of strings containing the arguments
 *
 * Return: Always 0 on success
 */


int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);

	return (0);
}
