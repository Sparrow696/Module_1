#include "function.h"
#include <math.h>
#include <stdio.h>

unsigned long long Square(const long long value_)
{
	return value_ * value_;
}

int Reverse(unsigned long value_)
{
	long long int num = value_;
	long long int rev = 0;
	long long int rem = 0;
	while (num != 0)
	{
		rem = num % 10;
		rev = rev * 10 + rem;
		num /= 10;
	}
	return rev;
}

int IsPalindrome(unsigned long value_)
{
	return value_ == Reverse(value_);
}

int Game(unsigned int value_)
{
	int arr[4];
	int usArr[4];
	int usNum = 0;
	int num = value_;
	int a = 1000;
	int bull = 0;
	int cow = 0;
	int t = 0;
	for (int i = 0; i < 4; ++i)
	{
		arr[i] = num / a;
		num = num % a;
		a = a / 10;
	}

	while (bull != 4)
	{
		cow = 0;
		bull = 0;
		printf("\nчисло?: ");
		scanf_s("%d", &usNum);
		a = 1000;
		for (int j = 0; j < 4; ++j)
		{
			usArr[j] = usNum / a;
			usNum = usNum % a;
			a = a / 10;
		}

		for (int i = 0; i < 4; i++)
		{
			if (usArr[i] == arr[i])
			{
				bull++;
			}
			for (int j = 0; j < 4; j++)
			{
				if (usArr[i] == arr[j] && usArr[j] != arr[j])
				{
					cow++;
				}
			}
		}

		printf("Коров = %d Быков = %d", cow, bull);
		t++;
	}
	printf("\nТы отгадал число за %d шагов!", t);

	return 0;
}

int FGetLine(char* line_, FILE* f_)
{
	char* lineCopy = line_;
	if (f_ == NULL)
	{
		perror("f_ == NULL!\n");
		return 0;
	}

	while (1)
	{
		char c = fgetc(f_);
		if (c == '\n' || c == EOF)
			break;
		else
		{
			*lineCopy = c;
			lineCopy++;
		}

	}
	*lineCopy = '\0';

	return strlen(line_);
}

int IsPrime(unsigned long value_)
{
	int prime = 0;

	for (int i = 2; i <= sqrt(value_); ++i)
	{
		if (value_ % i == 0)
		{
			prime = 2;
			break;
		}
		else
		{
			prime = 1;
		}
	}

	return prime;
}
