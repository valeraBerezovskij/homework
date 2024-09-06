#include <iostream>
using namespace std;

int main()
{
	srand(time(nullptr));
	int arr[5] = { 1,2,3,4,5 };
	for (int i = 0; i < 5; ++i) {
		cout << arr[i] << ' ';
	}

	cout << endl;
	for (int i = 0; i < 5; ++i) {
		cout << arr[5 - i - 1] << ' ';
	}

	cout << endl;
	int arr2[20];
	for (int i = 0; i < 20; ++i) {
		arr2[i] = rand() % 100;
		i % 2 == 0 ?
			cout << arr2[i] :
			cout << ":" << i - 1 << " | ";
	}

	cout << endl;
	int avg = 0, cnt = 0, arr3[10];
	for (int i = 0; i < 10; ++i) {
		arr3[i] = rand() % 41 - 20;
		if (arr3[i] > 0) {
			avg += arr3[i]; cnt++;
		}
	}
	cout << "Average value: " << avg / cnt << endl;

	cout << endl;
	int arr4[10], pos_cnt = 0, neg_cnt = 0, null_cnt = 0;
	for (int i = 0; i < 10; ++i) {
		arr4[i] = rand() % 11 - 5;
		if (arr4[i] > 0)  { ++pos_cnt; }
		if (arr4[i] < 0)  { ++neg_cnt; }
		if (arr4[i] == 0) { ++null_cnt; }
	}
	cout << "Positive numbers: " << pos_cnt << endl;
	cout << "Negative numbers: " << neg_cnt << endl;
	cout << "Null numbers: "     << null_cnt << endl;

	cout << endl;
	int arr5[10], sum = 0, avg5 = 0, cnt5 = 0;
	for (int i = 0; i < 10; ++i) {
		arr5[i] = rand() % 11;
		if (arr5[i] % 2 == 0) { sum += arr5[i]; }
		else {
			avg5 += arr5[i];
			++cnt5;
		}
	}
	cout << "Sum: " << sum << endl;
	cout << "Average value: " << avg5 / cnt5 << endl;

}
