#include "main.h"
#include <stdio.h>
/**
 *_strspn - function length of prefix substring
 * @s: string
 * @accept: string with characters to take
 * Return: unsigned int
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int a = 0, i = 0, c = 0;

	while (accept[a])
	{
		while (s[i] != 32)
		{
			if (accept[a] == s[i])
			{
				c++;
			}
			i++;
		}
		i = 0;
		a++;
	}
return (c);
}
