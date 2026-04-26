// Task 04 [The swap of extreme elements]
// Обмен экстремальных элементов
// 
// Дан вектор целочисленных значений. Необходимо спроектировать эффективный 
// алгоритм и реализовать функцию (или программу), которая меняет 
// экстремальные элементы вектора местами. Если экстремальных элементов
// несколько, то необходимо поменять последние найденные элементы.
// Дополнительно в функции необходимо предусмотреть механизм "защиты от дурака"
// для работы с некорректными данными.
#include "logic.h"
int find_min_index(int array[], int size) {
	int min = array[0];
	for (int i = 1; i < size; i) {
		if (min > array[i]) {
			min = i;
		}
	}
	return min;
}
int find_max_index(int array[], int size) {
	int max = array[0];
	for (int i = 1; i < size; i) {
		if (max < array[i]) {
			max = i;
		}
	}
	return max;
}

void swap_extrem_elements(int array[], int size) {
	int min_index = find_min_index(array, size);
	int max_index = find_max_index(array, size);

	int t = array[min_index];
	array[min_index] = array[max_index];
	array[max_index] = t;
}
