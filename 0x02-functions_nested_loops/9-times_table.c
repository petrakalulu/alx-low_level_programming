#include "main.h"
/**
 * prints the 9 times table starting with 0.
 * Return; no return.
 */
void times_table(void)
{
int i, result;
for (i = 0; i <= 9; i++)
{
result = 9 * i;
_putchar(result / 10 + '0');
_putchar(result % 10 + '0');
if (i != 9)
{
_putchar(',');
_putchar(' ');
if (result + 9 < 10)
 putchar(' ');
}
}
_putchar('\n');
}
