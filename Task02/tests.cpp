#include "tests.h"
void print(int number_after, int ammount, bool result) {
	cout << ", Number: " << number_after
		<< ", Ammout of dividing = " << ammount
		<< "\t--> " << (result ? "Pass" : "Fail")
		<< endl;
}

void test01() {
	int number = 1356;
	int ammount = 2;
	cout << "Number: " << number;

	decrise_on_ten(number, ammount);

	int expected_number = 13;
	print(number, ammount, number == expected_number);
}

void test02() {
	int number = 1356;
	int ammount = -2;
	cout << "Number: " << number;

	decrise_on_ten(number, ammount);

	int expected_number = -1;
	print(number, ammount, number == expected_number);
}

void test03() {
	int number = 1356;
	int ammount = 0;
	cout << "Number: " << number;

	decrise_on_ten(number, ammount);

	int expected_number = 1356;
	print(number, ammount, number == expected_number);
}