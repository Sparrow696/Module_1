#include "function.h"
#include <math.h>

unsigned long long Square(const long long value_)
{
   return value_*value_;
}

int SimpleNum(unsigned long long value_)
{
	int simple=0;
	int i = 2;
	while (i<=sqrt(value_))
	{
		if (value_%i==0)
		{
			simple = 2;
			break;
		}
		else
		{
			simple = 1;
		}
		i += 1;
	}
	return simple;
}
