#include "main.h"

/**
 * _strstr - a function that locates a substring.
 * @haystack: pointer
 * @needle: pointer to the substring
 * Return: a pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	char *h = haystack;
	char *n = needle;

	while (*h != '\0')
	{
		while (*n != '\0' && *h == *n)
		{
			n++;
			h++;
		}
		if (*n == '\0')
		{
			return (haystack);
		}
		h = ++haystack;
		n = needle;
	}
	return (NULL);
}
