#include "euler.h"
#include "function.h"

unsigned long long Problem_1(const unsigned int number_, const unsigned int* multiples_, const unsigned int size_)
{
   unsigned long long sum = 0;

   for (unsigned int n = 0; n < number_; ++n)
   {
      for (unsigned int i = 0; i < size_; ++i)
      {
         if (n % multiples_[i] == 0)
         {
            sum += n;
            break;

         }
      }
   }

   return sum;
}

unsigned long long Problem_2(const unsigned int number_)
{
   unsigned long long sumFib = 0;
   unsigned long long sum = 0;
   unsigned int fibElemFirst = 1;
   unsigned int fibElemSecond = 2;
   while (sumFib <= number_)
   {
      sumFib = fibElemFirst + fibElemSecond;
      printf("%d\n", sumFib);
      if (fibElemSecond % 2 == 0)
      {
         sum += fibElemSecond;
         printf("sum = %d\n", sum);
      }
      fibElemFirst = fibElemSecond;
      fibElemSecond = sumFib;

   }


   return sum;
}

unsigned long long Problem_3(const unsigned long long int number_)
{
    unsigned long long res = number_;
    unsigned long long i = 2;
    for (i=2; i < res; ++i)
    {
        if (res%i==0)
        {
            res = res / i;
            printf("%llu \n",i);
            printf("res= %llu\n", res);
            i = 2;
        }
        
    }
   return res;
}
