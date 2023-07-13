#include <stdio.h>

/**
 * main - this is the main function
 *
 *Return: always 0
 */

int main(void)
{
printf("Size of a char: %zu byte(s)\n", sizeof(char));
printf("Size of a short: %zu byte(s)\n", sizeof(short));
printf("Size of an int: %zu byte(s)\n", sizeof(int));
printf("Size of a long: %zu byte(s)\n", sizeof(long));
printf("Size of a long long: %zu byte(s)\n", sizeof(long long));
printf("Size of a float: %zu byte(s)\n", sizeof(float));

return (0);
}
