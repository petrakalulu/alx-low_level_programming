#include <stdio.h>
#include "main.h"
/**
 * add - adds two integers and returns the result
 * @a: first integer to be added
 * @b: second integer to be added
 * Return: sum of the two integers
 */
int add(int a, int b)
{
int sum = a + b;
printf("The sum of %d and %d is %d\n", a, b, sum);
return (sum);
}

