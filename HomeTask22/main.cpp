#include <iostream>


void func(int* num, int num2) {
	int tpm = 1;
	for (int i = 0; i < num2; i++)
	{
		tpm *= *num;
	}
	*num = tpm;
}

int main() {
	setlocale(LC_ALL, "Russian");


	std::cout << "Задание 1.\n";
	const int size = 10;
	int arr[size] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	for (int i = 0; i < size; i++)
		std::cout << arr[i] << ' ';
	std::cout << std::endl;

	int* ptr = arr; 
	for (int i = 0; i < size - 1; i += 2) {
		std::swap(*(ptr + i), *(ptr + i + 1)); 
	}
	for (int i = 0; i < size; i++) {
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;

	std::cout << "Задание 2.\nВведите два числа -> ";
	int n, m;
	std::cin >> n >> m;
	int* pn = &n;
	func(&n, m);
	std::cout << n;


	return 0;
}