#include "tasks.h"

/*	Task 03. Squares of Natural Numbers [Квадраты натуральных чисел]
*
*	По данному целому числу N распечатайте все квадраты натуральных чисел,
*	не превосходящие N, в порядке возрастания. В случае некоректных данных напечатайте ноль.
*
*	Формат входных данных [input]
*	На вход подаётся целое число в диапазоне типа int.
*
*	Формат выходных данных [output]
*	Должна возвращаться строка, которая содержит ответ на задание.
*
*	[ input 1]: 50
*	[output 1]: 1 4 9 16 25 36 49
*
*	[ input 2]: -50
*	[output 2]: 0
*
*	[ input 3]: 0
*	[output 3]: 0
*/

string task03(int number) {
	if (number <= 0)
	{
		return "0";
	}

	string msg = "1";
	int digit = 2;
	int degree =  0;
	while (degree <= number) {
		degree = pow(digit, 2);
		if (degree <= number)
		{
			msg += " " + to_string(degree);
		}

		digit++;
	}

	return msg;
}
