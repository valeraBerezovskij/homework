#include <iostream> 
using namespace std;

class Fraction {
private:
    int numerator = 0;
    int denominator = 1;
public:
    void Input(int x, unsigned y) {
        numerator = x;
        denominator = y;
    }

    void Input() {
        numerator = rand() % 100;
        denominator = rand() % 100 + 1;
    }

    void print() {
        cout << numerator << '/' << denominator << endl;
    }
};

int main() {
    srand(time(NULL));

    Fraction frac;
    frac.Input();
    frac.print();

    Fraction frac2;
    frac2.Input(2, 3);
    frac2.print();
}
