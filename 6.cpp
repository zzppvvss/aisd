/******************************************************************************
Реалзізувати сортування «подсчетом»
*******************************************************************************/

#include <iostream>
using namespace std;

int main() {
	setlocale(0, "");
	const int size = 1001;
	int n, m, mas[size];
	cout << "Введите размерность массива:" << endl;
	cin >> n;
	for (int i = 0; i < size; i++) {
		mas[i] = 0;
	}
	cout << "Введите элементы массива:" << endl;
	for (int i = 0; i < n; i++){
		cin >> m;
		mas[m]++;
	}
	cout << "Вот что вышло:" << endl;
	for (int i = 0; i < size; i++)
		for (int j = 0; j < mas[i]; j++) cout << i << " ";
	cout << endl;
	return 0;
}
