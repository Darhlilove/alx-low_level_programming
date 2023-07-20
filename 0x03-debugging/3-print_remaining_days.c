#include <stdio.h>
#include "main.h"

/**
 * is_leap_year - checks if a year is a leap year
 *
 * @year: the year to check
 *
 * Return: 1 if leap year, 0 otherwise
 */
int is_leap_year(int year)
{
	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
		return (1);
	else
		return (0);
}

/**
 * print_remaining_days - takes a date and prints how many days are
 * left in the year, taking leap years into account
 *
 * @month: month in number format
 * @day: day of month
 * @year: year
 *
 * Return: void
 */
void print_remaining_days(int month, int day, int year)
{
	int total_days = 365;

	if (is_leap_year(year))
		total_days = 366;

	if (month < 1 || month > 12 || day < 1 || day > 31)
	{
		printf("Invalid date: %02d/%02d/%04d\n", month, day, year);
		return;
	}

	if (month == 2 && day == 29 && !is_leap_year(year))
	{
		printf("Invalid date: %02d/%02d/%04d\n", month, day, year);
		return;
	}

	if (month >= 3 && is_leap_year(year))
		day++;

	printf("Day of the year: %d\n", day);
	printf("Remaining days: %d\n", total_days - day);
}
