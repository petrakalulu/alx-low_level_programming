#include <stdio.h>
#include "main.h"

int add(int a, int b);

int main(void) {
   int n;

   n = add(89, 9);
   printf("%d\n", n);
   return 0;
}

