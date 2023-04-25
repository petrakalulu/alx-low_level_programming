#include "main.h"
/**
 * main - Entry point
 * Description: 'prints 10 times the alphabet in lowercase'
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
int i, j;
for (j = 1; i <= 10; i++)
{
for (j = 97; j <= 122; j++)
{
_putchar(j);
}
_putchar('\n');
}
}

