#include "longNumber.h"
#include <stdlib.h>
#include <math.h>

LongNumber* Sum(const LongNumber* ln1_, const LongNumber* ln2_)
{
	LongNumber* result = malloc(sizeof(LongNumber));
	if (result == NULL)
		return NULL;

	result->size = max(ln1_->size, ln2_->size) + 1;
	if (result->size == 0)
		return NULL;

	result->digits = malloc(sizeof(result->size * sizeof(char)));
	if (result->digits == 0)
		return NULL;

	return;
}
