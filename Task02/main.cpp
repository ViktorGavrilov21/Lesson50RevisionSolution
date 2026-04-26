#include "logic.h"

int main() {
	srand(time(NULL));
	double array[DEFAULT_SIZE];
	
	int size;

	do {
		cout << "Input size of the array: ";
		cin >> size;
	} while (size <= 0 || size > DEFAULT_SIZE);

	init(array, size, -100, 100);

	print("Array: " + convert(array, size) + "\n");
	print("Average is: " + to_string(calculate_average(array, size)) + "\n");
	print("The sum is: " + to_string(count_float_sum(array, size)));

	return 0;
}