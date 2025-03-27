#include "logic.h"
int count_digits(int number) {
	int count = 1;
	for (int i = 1; i < number; i++) {
		count++;
		number /= 10;
	}

	return count;
}

void right_shift(int& number, int shift) {
	if (shift < 0) {
		number = -1;
		return;
	}

	int count = count_digits(number);
	
	for (int i = 0; i < shift; i++) {
		number = ((number % 10) * pow(10, (count - 1))) + (number / 10);
	}
}