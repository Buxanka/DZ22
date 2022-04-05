#include <iostream>
using namespace std;

//Задача 1
//Выводит массив
void showArr(int arr[], int length) {
	for (int i = 0; i < length; i++)
		cout << arr[i] << " ";
}

//Меняет элементы местами (1, 2 - 2, 1 и тд)
void func(int arr[], int length) {
	swap(*arr, *(arr + 1));
	swap(*(arr + 2), *(arr + 3));
	swap(*(arr + 4), *(arr + 5));
}

//Возводит число в степень
void myPow(int* pn, int num) {
	double x;
	if (num == 0)
		cout << *pn;
	else
		for (int i = 1; i <= num; i++)
			x = 1.0;
			x = x * *pn;
	cout << x;
}

int main(void) {
	setlocale(LC_ALL, "Russian");

	//Задача 1
	int mas[6] = { 1, 2, 3, 4, 5, 6 };
	int* pm1 = mas + 1;
	int* pm2 = mas + 2;
	int* pm3 = mas + 3;
	int* pm4 = mas + 4;
	int* pm5 = mas + 5;

	cout << "Задача 1\nИзначальный массив: ";
	showArr(mas, 6);
	cout << endl;
	func(mas, 6);
	cout << "Измененный массив: ";
	showArr(mas, 6);
	cout << endl << endl;

	//Задача 2
	int n, m;
	int* pn = &n;
	cout << "Задача 2\nВведите число, которое хотите возвести в степень: ";
	cin >> n;
	cout << "Введите степень: ";
	cin >> m;
	myPow(&n, m);

	return 0;
}

