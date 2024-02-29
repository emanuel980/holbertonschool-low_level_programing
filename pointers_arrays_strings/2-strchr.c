#include "main.h"
#include <stddef.h>
/**
 * _strchr - locates character in string
 * @s: string to check
 * @c: char c
 * Return: pointer to char, or null
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		else
		{
			s++;
		}
	}
	if (c == '\0')
	{
		return (s);
	}
	return (NULL);
}
