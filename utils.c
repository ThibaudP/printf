#include "holberton.h"

/**
 * _putchar - writes the character c to stdout
 *
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _puts - writes the string str to stdout
 *
 * @str: The string to print
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i])
		_putchar(str[i++]);
}

/**
 * _strlen - returns the length of the string str
 *
 * @str: The string to measure length
 *
 * Return: the length of the str string
 */

int	_strlen(char *str)
{
	int len = 0;

	if (str)
		while (str[len])
			len++;
	return (len);
}

/**
 * str_concat - concatenates two strings
 *
 * @s1: the first string
 * @s2: the second string
 *
 * Return: a pointer to the new string, or NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	char *str;
	int i = 0, j = 0;

	str = malloc(sizeof(char) * (_strlen(s1) + _strlen(s2) + 1));
	if (!str)
		return (NULL);
	if (s1 != NULL)
		while (s1[i])
		{
			str[i] = s1[i];
			i++;
		}
	if (s2 != NULL)
		while (s2[i])
		{
			str[i + j] = s2[j];
			j++;
		}
	str[i + j] = '\0';
	return (str);
}