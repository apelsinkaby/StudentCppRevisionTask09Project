#include "tasks.h"

/*	Task 02. An Exact Power of Two [точная степень двойки]
*
*	Дано целое число. Необходимо определить, 
*	является ли данное число точной степенью двойки.
*
*	Формат входных данных [input]
*	На вход подаётся целое число в диапазоне типа int.
*
*	Формат выходных данных [output]
*	Должно быть возвращено булевское значение - ответ на задание.
*
*	[ input 1]: 32
*	[output 1]: true
*
*	[ input 2]: 1
*	[output 2]: true
*
*	[ input 3]: 0
*	[output 3]: false
*
*	[ input 4]: 30
*	[output 4]: false
*
*	[ input 4]: -4
*	[output 4]: false
*/

bool task02(int number) {
	if (number <= 0)
	{
		return false;
	}

	int degree = 0;
	int to_pow = 1;

	while (degree <= number)
	{
		degree = pow(2, to_pow);
		if (degree == number or number == 1)
		{
			return true;
		}
		to_pow++;
	}

	return false;
}