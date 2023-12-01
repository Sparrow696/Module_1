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
	char line[100] = "";

	FILE* file;
	fopen_s(&file, "file.txt", "r");
	if (!file)
	{
		perror("f == NULL!");
		return 1;
	}
	printf("%d\n", FGetLine(line, file));
	printf("%s\n", line);
	fclose(file);

	return 0;
}
