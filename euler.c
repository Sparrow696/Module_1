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
	for (unsigned long long devider = 2; devider < res; ++devider)
	{
		if (res % devider == 0 && IsPrime(devider) == 1)
		{
			res = res / devider;
			devider = 2;
		}

	}
	return res;
}

unsigned long long Problem_4()
{
	int palindrome = 0;
	int res = 0;
	int max = 0;
	for (int a = 900; a < 1000; a++)
	{
		for (int b = 900; b < 1000; b++)
		{
			res = a * b;
			if (IsPalindrome(res))
			{
				palindrome = res;
				if (max < palindrome)
				{
					max = palindrome;
				}
			}

		}
	}
	return palindrome;
}

unsigned long long int Problem_5()
{
	unsigned long long int t = 0;
	unsigned long long int minNum = 21;
	while (minNum)
	{
		if (t == 190)
		{
			break;
		}

		for (int i = 1; i < 20; ++i)
		{

			if (minNum % i == 0)
			{
				t += i;
			}
			else
			{
				t = 0;
				minNum++;
				break;
			}
			if (t == 190)
			{
				break;
			}
		}

	}

	return minNum;
}