﻿#include "tasks.h"

/*	Task 07. Min Number Digit [минимальная цифра числа]
*
*	Дано целое число. Необходимо найти минимальную цифру заданного числа
*	с использованием эффективного алгоритма.
*
*	Формат входных данных [input]
*	На вход подаётся целое число в диапазоне типа long.
*
*	Формат выходных данных [output]
*	Должна быть возвращена минимальная цифра числа.
*
*	[ input 1]: 12345
*	[output 1]: 1
*
*	[ input 2]: 54321
*	[output 2]: 1
*
*	[ input 3]: 11111
*	[output 3]: 1
*
*	[ input 4]: 0
*	[output 4]: 0
*
*	[ input 5]: -12345
*	[output 5]: 1
*/

int task07(long number) {
	if (number == 0)
	{
		return 0;
	}
	number = number > 0 ? number : -number;
	int digit;
	int min_digit = 9;
	while (number > 0) {
		digit = number % 10;
		if (digit < min_digit)
		{
			min_digit = number % 10;
		}

		number /= 10;
	}

	return min_digit;
}