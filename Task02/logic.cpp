// Task 02 [The sum of average elements]
// Сумма средних элементов
// 
// Дан вектор вещественных/дробных значений. Необходимо спроектировать эффективный
// алгоритм и реализовать функцию (или программу), которая находит сумму всех
// элементов вектора, абсолютная величина которых меньше среднего арифметического
// всех элементов. 
// Дополнительно в функции необходимо предусмотреть механизм "защиты от дурака"
// для работы с некорректными данными (в данном случае функция должна 
// возвращать значение -1).
// 
// Далее необходимо разработать полноценный или тестовый проект для полной 
// демонстрации работоспособности данной функции.
#include "logic.h"

double calculate_average(double array[], int size) {
	double avg = 0;
	for (int i = 0; i < size; i++) {
		avg += array[i];
	}
	return avg / size;
}

double count_float_sum(double array[], int size) {
	if (size <= 0 || size > DEFAULT_SIZE) {
		return -1;
	}

	double sum = 0;

	for (int i = 0; i < size; i++) {
		int abs = array[i] < 0 ? -array[i] : array[i];
		if (array[i] < calculate_average(array, size)) {
			sum += abs;
		}
	}

	return sum;
}
