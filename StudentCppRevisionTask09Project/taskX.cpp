#include "tasks.h"

/*	Task X. Unique Number Digits [уникальные цифры числа]
*
*	Дано целое число. Необходимо определить, все ли цифры числа уникальны,
*	т.е. среди цифр числа нет повторяющихся.
*
*	Формат входных данных [input]
*	На вход подаётся целое число в диапазоне типа long.
*
*	Формат выходных данных [output]
*	Должно быть возвращено булевское значение - результат решения задания.
*
*	[ input 1]: 12345
*	[output 1]: true
*
*	[ input 2]: 54321
*	[output 2]: true
*
*	[ input 3]: 11111
*	[output 3]: false
*
*	[ input 4]: 121
*	[output 4]: false
*
*	[ input 5]: -12345
*	[output 5]: true
*
*	[ input 6]: 0
*	[output 6]: true
*/

bool taskX(long number) {
	if (number == 0)
	{
		//	cout << number << " true" << endl;
		return true;
	}
	number = number > 0 ? number : -number;
	while (number > 0)
	{
		int digit = number % 10;
		long number2 = number / 10;

		while (number2 > 0) {
			int digit2 = number2 % 10;

			if (digit == digit2) {
				//	cout << number << " false" << endl;
				return false;
			}

			number2 /= 10;
		}
		number /= 10;
	}

	//cout << number << " true" << endl;
	return true;
}