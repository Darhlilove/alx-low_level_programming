#ifndef HEADER_H
#define HEADER_H

/* print character to stdout */
int _putchar(char c);

/* checks for uppercase character */
int _isupper(int c);

/* checks for a digit (0 through 9) */
int _isdigit(int c);

/* multiplies two integers */
int mul(int a, int b);

/* prints the numbers, from 0 to 9, followed by a new line */
void print_numbers(void);

/* prints the numbers, from 0 to 9, except 2 and 4, followed by a new line. */
void print_most_numbers(void);

/* prints 10 times the numbers, from 0 to 14, followed by a new line. */
void more_numbers(void);

/* draws a straight line in the terminal with n number of _ */
void print_line(int n);

/* draws a diagonal line on the terminal. */
void print_diagonal(int n);

/* prints a square, followed by a new line, using # */
void print_square(int size);

/* prints the numbers from 1 to 100, followed by a new line. But for multiples
 * of three print Fizz instead of the number and for the multiples of five print
 * Buzz. For numbers which are multiples of both three and five print FizzBuzz.
 */
void fizz_buzz(void);

/* prints a triangle, using #, followed by a new line */
void print_triangle(int size);

#endif
