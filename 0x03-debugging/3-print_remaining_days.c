#include <stdio.h>
#include "main.h"

/**
 * is_leap_year - checks if a year is a leap year
 * @year: the year to check
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
 * day_of_year - calculates the day of the year for a given date
 * @month: the month in number format
 * @day: the day of the month
 * @leap: indicates if the year is a leap year (1) or not (0)
 * Return: the day of the year
 */
int day_of_year(int month, int day, int leap)
{
	int days_per_month[] = {0, 31, 28 + leap, 31, 30, 31, 30, 31, 31, 30, 31,
				30, 31};
	int i, day_of_year = 0;

	for (i = 1; i < month; i++)
	{
		day_of_year += days_per_month[i];
	}

	day_of_year += day;
	return (day_of_year);
}

/**
 * print_remaining_days - takes a date and prints how many days are
 * left in the year, taking leap years into account
 * @month: month in number format
 * @day: day of month
 * @year: year
 * Return: void
 */
void print_remaining_days(int month, int day, int year)
{
	int leap = is_leap_year(year);
	int total_days = 365 + leap;
	int day_of_year = day_of_year(month, day, leap);

	if (month < 1 || month > 12 || day < 1 || day > 31)
	{
		printf("Invalid date: %02d/%02d/%04d\n", month, day, year);
		return;
	}

	if (day_of_year > total_days)
	{
		printf("Invalid date: %02d/%02d/%04d\n", month, day, year);
		return;
	}

	printf("Day of the year: %d\n", day_of_year);
	printf("Remaining days: %d\n", total_days - day_of_year);
}
