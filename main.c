#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <locale.h>
#include "euler.h"
#include "function.h"

#define SIZE 2

int main()
{
	setlocale(LC_ALL, "Rus");
	unsigned int number = 0;
	unsigned int number2 = 0;
	unsigned int sqr = 0;
	int t = 0;
	int rem = 0;
	int d = 1;
	printf("число: ");
	scanf_s("%d", &number);
	while (number != 0) {
		rem = number % 8;
		number2 = number2 + rem * d;
		number /= 8;
		d *= 10;
	}
	number2 /= 10;
	printf("%d",number2);
	for (unsigned i = 1; sqr + 2 <= number2; i += 2) {
		sqr += i;
		t++;
	}
	if (number2 == sqr || number2 == 1)
	{
		printf("Yes");
	}

	return 0;
}
