#include "main.h"

/**
 * rev_string - Reverses the string
 * @s: The string to reverse
 * Return: void
 */

void rev_string(char *s)
{
	int len = 0;
	int index = 0;
	char temp;

	while (s[index++])
	len++;

	for (index = len - 1; index >= len / 2; index--)
	{
	temp = s[index];
	s[index] = s[len - index - 1];
	s[len - index - 1] = temp;
	}
}

