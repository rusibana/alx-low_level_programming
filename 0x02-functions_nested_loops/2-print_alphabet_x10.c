#include "holberton.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
void print_alphabet_x10(void);
int main(void)
{
/* My main function */
print_alphabet_x10();
return (0);
}

/**
 * print_alphabet - Prints the lowercase alphabet from a to z
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
for(int i = 0; i<10;i++)
{
char letter = 'a';
while (letter <= 'z')
{
        _putchar(letter);
        letter++;
}
_putchar('\n');
}
}
