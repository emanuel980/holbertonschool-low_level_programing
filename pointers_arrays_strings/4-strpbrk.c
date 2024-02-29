#include "main.h"
#include <stddef.h>
/**
 *_strpbrk - search string for any set of bytes
 * @s: string
 * @accept: string with characters to take
 * Return: pointer from the selected character
 */

char *_strpbrk(char *s, char *accept)
{
	int a = 0, i = 0;

	while (s[a])
	{
		while (accept[i])
		{
			if (s[a] == accept[i])
			{
				s += a;
				return (s);
			}
			i++;
		}
		i = 0;
		a++;
	}
return (NULL);
}
