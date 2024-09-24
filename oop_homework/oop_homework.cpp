#include <iostream>
using namespace std;

class Fraction {
private:
	int numerator;
	unsigned denominator;
public:

	Fraction(int n, unsigned d) : numerator(n), denominator(d) { }
	Fraction() {
		numerator = 0;  denominator = 1;
	};

	void setNumerator(int x) { numerator = x; }
	void setDenominator(unsigned x) { denominator = x; }

	int        getNumerator() const { return numerator; }
	unsigned getDenominator() const { return denominator; }

	void setRandom() {
		numerator = rand() % 10;
		denominator = rand() % 10 + 1;
	}

	void print() {
		cout << numerator << '/' << denominator << endl;
	}
};

int main() {
	srand(time(NULL));

	Fraction frac;
	frac.setDenominator(5);
	frac.setNumerator(3);
	Fraction frac1;
	frac1.setDenominator(3);
	frac1.setNumerator(4);

	frac.print();
	frac1.print();
}
