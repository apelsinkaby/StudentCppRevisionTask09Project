#include "tasks.h"(

/*	Task 04. Все целые степени двойк (All Integer Powers of Two)
*
*	По данному числу N распечатайте все целые степени двойки, не превосходящие N, в порядке возрастания.
*	В случае некорректных данных напечатайте ноль.
*
*	Формат входных данных [input]
*	На вход подаётся целое число в диапазоне типа int.
*
*	Формат выходных данных [output]
*	Должна возвращаться строка, которая содержит ответ на задание.
*
*	[ input 1]: 40
*	[output 1]: 1 2 4 8 16 32
*
*	[ input 2]: 1
*	[output 2]: 1
*
*	[ input 3]: 0
*	[output 3]: 0
*
*	[ input 4]: -40
*	[output 4]: 0
*/

string task04(int number) {
	if (number <= 0)
	{
//		cout << number << ": 0" << endl;;
		return "0";
	}
	string msg = "1";
	int degree = 1;

	while (degree <= number)
	{
		degree *= 2;
		if (degree <= number)
		{
			msg += " " + to_string(degree);
		}
	}

//	cout << number << ": " << msg << endl;
	return msg;
}