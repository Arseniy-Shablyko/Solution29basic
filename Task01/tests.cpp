#include "tests.h"
void print_primary(int number, int shift) {
	cout << "Number = " << number << ", Shift = "
		<< shift << endl;
}

void print_result(int number, int shift, bool result) {
	cout << "Number = " << number << ", Shift = "
		<< shift << "\t--> " << (result ? "Pass" : "Fail")
		<< endl;
}

void test01() {
	int number = 134;
	int shift = -3;

	print_primary(number, shift);

	right_shift(number, shift);

	int expected_number = -1;
	int actal_number = number;
	print_result(number, shift, expected_number == actal_number);
}

void test02() {
	int number = 13445;
	int shift = 3;

	print_primary(number, shift);

	right_shift(number, shift);

	int expected_number = 44513;
	int actal_number = number;
	print_result(number, shift, expected_number == actal_number);
}

void test03() {
	int number = 1;
	int shift = 3;

	print_primary(number, shift);

	right_shift(number, shift);

	int expected_number = 1;
	int actal_number = number;
	print_result(number, shift, expected_number == actal_number);
}