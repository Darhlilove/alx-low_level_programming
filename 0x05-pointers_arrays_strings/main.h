#ifndef HEADER_H
#define HEADER_H

/** takes a pointer to an int as parameter and updates the value it points to
 * to 98
 */
void reset_to_98(int *n);

/* swaps the values of two integers */
void swap_int(int *a, int *b);

/* returns the length of a string */
int _strlen(char *s);

/* prints a string, followed by a new line, to stdout */
void _puts(char *str);

/* prints a string, in reverse, followed by a new line */
void print_rev(char *s);

/* reverses a string */
void rev_string(char *s);

/* prints every other character of a string, starting with the first char */
void puts2(char *str);

/* prints half of a string */
void puts_half(char *str);

/** function should print the second half of the string
 * If the number of characters is odd, the function should print the last
 * n characters of the string, where n = (length_of_the_string - 1) / 2
 */
void puts_half(char *str);

/* prints n elements of an array of integers */
void print_array(int *a, int n);

/** copies the string pointed to by src, including the terminating null byte(\0)
 * to the buffer pointed to by dest
 */
char *_strcpy(char *dest, char *src);

#endif
