#include "logic.h"
void change(int& a, int& b) {
	int t = b;
	b = a;
	a = t;
}