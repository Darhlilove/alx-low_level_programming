#include <unistd.h>

/**
 * main - Entry point
 *
 * message - store string to printed to standard error
 *
 * length - calculates the length of the string stored in variable 'message'
 *
 * Return: Always 1 on success
 */

int main(void)
{
char message[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
int length = sizeof(message) - 1;

write(2, message, length);
return (1);
}

