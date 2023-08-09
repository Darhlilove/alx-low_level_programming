#include "main.h"

/**
 * is_space - Checks if a character is a whitespace character.
 *
 * @c: The character to be checked.
 *
 * Return: 1 if c is a whitespace character, otherwise 0.
 */
int is_space(char c)
{
	return (c == ' ' || c == '\t' || c == '\n');
}

/**
 * count_words - Counts the number of words in a string.
 *
 * @str: The input string.
 *
 * Return: The number of words.
 */

int count_words(char *str)
{
	int word_count = 0;
	int is_word = 0;

	while (*str)
	{
		if (is_space(*str))
		{
			is_word = 0;
		}
		else if (!is_word)
		{
			is_word = 1;
			word_count++;
		}
		str++;
	}

	return (word_count);
}

/**
 * get_next_word - Extracts the next word from a string.
 *
 * @str: A pointer to the input string.
 *
 * Return: A pointer to the next word or NULL if no word is found.
 */

char *get_next_word(char **str)
{
	char *start;

	while (**str && is_space(**str))
		(*str)++;

	start = *str;
	while (**str && !is_space(**str))
		(*str)++;

	if (*str == start)
		return (NULL);

	return (start);
}

/**
 * strtow - Splits a string into words.
 *
 * @str: The input string.
 *
 * Return: A pointer to an array of words, or NULL on failure.
 */

char **strtow(char *str)
{
	int word_count = count_words(str);
	char **word_ptr, **words;

	if (!str || *str == '\0')
		return (NULL);

	if (word_count == 0)
		return (NULL);

	words = malloc((word_count + 1) * sizeof(char *));

	if (!words)
		return (NULL);

	word_ptr = words;
	while (*str)
	{
		char *word = get_next_word(&str);

		if (word)
		{
			*word_ptr = word;
			word_ptr++;
		}
	}

	word_ptr = NULL;

	return (words);
}
