#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int _isalpha(int c);
int main(void)
{
/* My main function */
int r;

r = _isalpha('H');
_putchar(r + '0');
r = _isalpha('o');
_putchar(r + '0');
r = _isalpha(108);
_putchar(r + '0');
r = _isalpha(';');
_putchar(r + '0');
_putchar('\n');
return (0);
}

/**
 * _isalpha - Checks if a character is an alphabetic letter.
 *
 * @c: The character to be checked.
 *
 * Return: 1 if the character is an alphabetic letter, 0 otherwise.
 */
int _isalpha(int c)
{
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
                return (1);
        else
                return (0);
}

