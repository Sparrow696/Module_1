#include <stdio.h>
#include "euler.h"
#include "function.h"

#define SIZE 2

int main()
{
   unsigned long long number = 0;
   printf("Number = ");
   scanf_s("%llu", &number);
   printf("%llu",Problem_3(number));

 /*  unsigned int multiples[SIZE];
   printf("multiples = ");                   ��������
   for (unsigned int i = 0; i < SIZE; ++i)
      scanf_s("%du", &multiples[i]);*/


   return 0;
}