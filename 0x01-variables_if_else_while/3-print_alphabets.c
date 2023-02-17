#include <stdio.h>

/**
 * main - Entry Point
 * Return: Always 0 (Success)
 */

int main(void)
{
	char c;
	char d;

	c = 'a';
	d = 'A';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	while (d <= 'Z')
	{
		putchar(d);
		d++;
	}
	puchar('\n');
	return (0);
}
