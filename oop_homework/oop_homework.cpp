#include <iostream> 
using namespace std;

void cnt(int* arr, int size, int& pos, int& neg, int& null) {
    for (int i = 0; i < size; ++i)
    {
        if (arr[i] > 0) { ++pos; }
        else if (arr[i] < 0) { ++neg; }
        else if (arr[i] == 0) { ++null; }
    }
}

void positive_array_init(int* arr, int size, int* from, int size_from) {
    for (int i = 0, j = 0; i < size_from; i++) {
        if (from[i] > 0) {
            arr[j] = from[i];
            j++;
        }
    }
}

void negative_array_init(int* arr, int size, int* from, int size_from) {
    for (int i = 0, j = 0; i < size_from; i++) {
        if (from[i] < 0) {
            arr[j] = from[i];
            j++;
        }
    }
}

void null_array_init(int* arr, int size, int* from, int size_from) {
    for (int i = 0, j = 0; i < size_from; i++) {
        if (from[i] == 0) {
            arr[j] = from[i];
            j++;
        }
    }
}

int main() {
    srand(time(NULL));
    int s;
    cin >> s;
    int* arr = new int[s];

    for (int i = 0; i < s; ++i) {
        arr[i] = rand() % 40 - 20 + 1;
        cout << arr[i] << ' ';
    }

    int posit_cnt = 0, neg_cnt = 0, null_cnt = 0;
    cnt(arr, s, posit_cnt, neg_cnt, null_cnt);

    cout << endl << posit_cnt << " " << neg_cnt << " " << null_cnt << endl;
    int* positive = new int[posit_cnt];
    int* negative = new int[neg_cnt];
    int* null = new int[null_cnt];
    positive_array_init(positive, posit_cnt, arr, s);
    negative_array_init(negative, neg_cnt, arr, s);
    null_array_init(null, null_cnt, arr, s);

    for (int i = 0; i < posit_cnt; ++i) {
        cout << positive[i] << ' ';
    }
    cout << endl;
    for (int i = 0; i < neg_cnt; ++i) {
        cout << negative[i] << ' ';
    }
    cout << endl;
    for (int i = 0; i < null_cnt; ++i) {
        cout << null[i] << ' ';
    }
    cout << endl;


    delete[] positive;
    delete[] negative;
    delete[] null;
    delete[] arr;
}