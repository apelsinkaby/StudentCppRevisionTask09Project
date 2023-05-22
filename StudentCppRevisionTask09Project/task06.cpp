#include "tasks.h"

/*	Task 06. Sum of Number Digits [подсчёт суммы цифр числа]
*
*	Дано целое число. Подсчитайте сумму его цифр.
*
*	Формат входных данных [input]
*	На вход подаётся целое число в диапазоне типа long.
*
*	Формат выходных данных [output]
*	Должно возвращаться целое число, которое является решением задания.
*
*	[ input 1]: 123456
*	[output 1]: 21
*
*	[ input 2]: 9
*	[output 2]: 9
*
*	[ input 3]: 0
*	[output 3]: 0
*
*	[ input 4]: -15
*	[output 4]: 6
*/

int task06(long number) {
	number = number > 0 ? number : -number;
	int sum = 0;
	while (number > 0) {
		sum += number % 10;
		number /= 10;
	}
	return sum;
}