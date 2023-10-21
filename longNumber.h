#pragma once
typedef struct LongNumber
{
   char* digits;
   unsigned int size;
} LongNumber;

LongNumber* Create(char* number_);

LongNumber* Sum(const LongNumber* ln1_, const LongNumber* ln2);