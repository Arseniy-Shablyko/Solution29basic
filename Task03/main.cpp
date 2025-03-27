#include <iostream>
#include "logic.h"
using namespace std;

int main() {
	int a, b;
	cout << "Input your numbers(a, b): ";
	cin >> a >> b;

	change(a, b);

	cout << "a = " << a;
	cout << ", b = " << b << endl;

	return 0;
}