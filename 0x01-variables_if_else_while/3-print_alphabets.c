#include <stdio.h>

/*
 * main - entry point
 *
 * Return: Always 0 for successful
 *
 * */
int main(void){
char lowercase = 'a';
char uppercase = 'Z';

while(lowercase <= 'z')
{
putchar(lowercase);
lowercase++;
}
putchar('\n');
while(uppercase <= 'Z')
{
putchar(uppercase);
uppercase++;
}
return (0);
}
