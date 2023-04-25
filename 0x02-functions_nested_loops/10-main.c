#include "main.h"
#include <stdio.h>

/* Function prototype */
int add(int a, int b);

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int n;

    n = add(89, 9);
    printf("%d\n", n);
    return (0);
}

