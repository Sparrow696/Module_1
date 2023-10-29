#pragma once

#ifndef _FUNCTION_H_
#define _FUNCTION_H_

/*
* @brief Возводит число в квадрат.
* @param value_ : Число
* @return Квадрат числа.
*/
unsigned long long Square(const long long value_);

/*
* @brief Проверка простого числа.
* @param value_ : Число
* @return 1 - простое, 2 - составное.
*/
int IsPrime(unsigned long value_);

/*
* @brief Переворачивает число.
* @param value_ : Число.
* @return перевернутое число.
*/
int Reverse(unsigned long value_);

/*
* @brief Проверка на палиндром.
* @param value_ : Число.
* @return палиндром или не палиндром.
*/
int IsPalindrome(unsigned long value_);

/*
* @brief Быки и Коровы.
* @param value_ : Число.
* @return игра.
*/
int Game(unsigned int value_);

#endif // !_FUNCTION_H_

