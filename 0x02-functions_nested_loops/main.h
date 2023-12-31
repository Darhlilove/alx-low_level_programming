#ifndef HEADER_H
#define HEADER_H

/* print character to stdout */
int _putchar(char c);

/* print letters of the alphabet */
void print_alphabet(void);

/* prints 10 letters of the alphabet 10 times */
void print_alphabet_x10(void);

/**
 * _islower: checks for lowercase character
 *
 * @c: placeholder for the character to be checked
 */
int _islower(int c);

/* checks for alphabetic character */
int _isalpha(int c);

/* prints the sign of a number */
int print_sign(int n);

/* computes the absolute value of an integer */
int _abs(int);

/* prints the last digit of a number */
int print_last_digit(int);

/* prints every minute of the day of Jack Bauer, starting from 00:00 to 23:59 */
void jack_bauer(void);

/* prints the 9 times table, starting with 0 */
void times_table(void);

/* adds two integers and returns the result */
int add(int, int);

/* prints all natural numbers from n to 98, followed by a new line */
void print_to_98(int n);

/* prints the n times table, starting with 0 */
void print_times_table(int n);

/* computes and prints the sum of all the multiples of 3 or 5 below 1024 */
int sum_multiple_of_three(int n);

#endif
