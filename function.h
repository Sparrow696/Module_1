#pragma once

#ifndef _FUNCTION_H_
#define _FUNCTION_H_

/*
* @brief �������� ����� � �������.
* @param value_ : �����
* @return ������� �����.
*/
unsigned long long Square(const long long value_);

/*
* @brief �������� �������� �����.
* @param value_ : �����
* @return 1 - �������, 2 - ���������.
*/
int IsPrime(unsigned long value_);

/*
* @brief �������������� �����.
* @param value_ : �����.
* @return ������������ �����.
*/
int Reverse(unsigned long value_);

/*
* @brief �������� �� ���������.
* @param value_ : �����.
* @return ��������� ��� �� ���������.
*/
int IsPalindrome(unsigned long value_);

/*
* @brief ���� � ������.
* @param value_ : �����.
* @return ����.
*/
int Game(unsigned int value_);

/*
* @brief ��������� ������ �� �����.
* @param line_ : ������ ���� ���������.
* @param f_ : ���� ������ ��������� ������.
* @return ���-�� ����������� ��������.
*/
int FGetLine(char* line_, FILE* f_);
#endif // !_FUNCTION_H_

