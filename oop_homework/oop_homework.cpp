#include <iostream>
using namespace std;

int main() {
	int s;
	cout << "Enter size: ";
	cin >> s;

	int* arr = new int[s];
	for (int i = 0; i < s; ++i) {       // копирование и вывод
		arr[i] = i + 1;
		cout << arr[i] << ' ';
	}

	cout << endl;

	int* arr2 = new int[s + 1];
	for (int i = 0; i < s; ++i) {       // инициализация
		arr2[i] = arr[i];
	}
	arr2[s] = 100;

	for (int i = 0; i < (s + 1); ++i) { // вывод
		cout << arr2[i] << " ";
	}

	delete[] arr;
	delete[] arr2;
}