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

	unsigned int usChoise = 0;
	srand((unsigned int)time(NULL));
	unsigned int random = rand() % 9;
	printf("1. Играть против компьютера.\n2. Играть против человека.\n");
	scanf_s("%d", &usChoise);
	switch (usChoise)
	{
	case 1:
		printf("Пока не работает :3");
		//Game(random);
		break;
	case 2:
		printf("Загадай число: ");
		scanf_s("%d", &usChoise);
		system("cls");
		Game(usChoise);
		break;
	default:
		printf("Ну и ладно :( ");
		break;
	}
	/*printf("Number = ");
	scanf_s("%llu", &number);
	printf("reverse = %d\n", Reverse(number));
	printf("%d\n", IsPalindrome(number));*/

	/*unsigned int multiples[SIZE];
	printf("multiples = ");                   фибоначи
	for (unsigned int i = 0; i < SIZE; ++i)
	 scanf_s("%du", &multiples[i]);*/
	return 0;
}
