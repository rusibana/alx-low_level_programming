#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
void print_alphabet(void);
int main(void)
{
/* My main function */
print_alphabet();
return (0);
}

/**
 * print_alphabet - Prints the lowercase alphabet from a to z
 *
 * Return: void
 */
void print_alphabet(void)
{
char letter = 'a';
while (letter <= 'z')
{
	_putchar(letter);
	letter++;
}
}
