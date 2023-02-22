#include "main.h"

/**
 *_isalpha - Checks if charector is an alphabet
 *@c: The charector gto be checked
 *Return: 1 for alphabetic charector or 0 for anything else
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
	return (1);
	}
	return (0);
}
