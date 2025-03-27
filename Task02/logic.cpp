#include "logic.h"
void decrise_on_ten(int& number, int ammount) {
	if (ammount < 0) {
		number = -1;
		return;
	}

	for (int i = 0; i < ammount; i++) {
		number /= 10;
	}
}