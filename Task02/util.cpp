#include "util.h"

void print(string msg) {
	cout << msg;
}
string convert(double array[], int size) {
	if (size <= 0 || size > DEFAULT_SIZE) {
		return "No array";
	}

	string s = to_string(array[0]);

	for (int i = 1; i < size; i++) {
		s += " " + to_string(array[i]);
	}

	return s;
}
void init(double array[], int size, int a, int b) {
	if (size <= 0 || size > DEFAULT_SIZE) {
		return;
	}

	if (a > b) {
		int t = a;
		a = b;
		b = t;
	}

	for (int i = 0; i < size; i++) {
		int part1 = rand() % (b - a + 1) + a;
		int part2 = rand() % (b - a + 1) + a;
		array[i] = part1 + (part2 * 0.01);
	}
}