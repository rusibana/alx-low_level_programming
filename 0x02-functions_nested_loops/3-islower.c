#include "holberton.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int _islower(int c);
int main(void)
{
/* My main function */
int r;
r = _islower('H');
_putchar(r + '0');
r = _islower('o');
_putchar(r + '0');
r = _islower(108);
_putchar(r + '0');
_putchar('\n');
return (0);
}


/**
 * _islower - Checks if a character is lowercase.
 *@c: The character to be checked.
 * Return: 1 if the character is lowercase, 0 otherwise.
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
	return (1);
else
	return (0);
}

