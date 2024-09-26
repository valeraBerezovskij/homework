#include <iostream>
using namespace std;

class Car {
private:
	char* model;
	char* country;
	int year;
	double price;
public:
	Car(const char* m, const char* c, const int y, const double p) {
		model   = new char[strlen(m) + 1];
		country = new char[strlen(c) + 1];
		strcpy_s(model, strlen(m) + 1, m);
		strcpy_s(country, strlen(c) + 1, c);
		year = y, price = p;
	}

	Car() { 
		model = nullptr, country = nullptr;
		year = 0, price = 0;
	}
	
	char*  GetModel()   const { return model; }
	char*  GetCountry() const { return country; }
	int    GetYear()    const { return year; }
	double GetPrice()   const { return price; }

	void SetModel(const char* m) {
		model = new char[strlen(m) + 1];
		strcpy_s(model, strlen(m) + 1, m);
	}
	void SetCountry(const char* c) {
		country = new char[strlen(c) + 1];
		strcpy_s(country, strlen(c) + 1, c);
	}
	void SetYear(const int y)     { year = y; }
	void SetPrice(const double p) { price = p; }

	void Input() {
		string m, c;
		int y;
		double p;

		cout << "Enter model name: "; cin >> m;
		SetModel(m.c_str());
		cout << "Enter country name: "; cin >> c;
		SetCountry(c.c_str());
		cout << "Enter year: "; cin >> y;
		year = y;
		cout << "Enter price: "; cin >> p;
		price = p;
	}

	void Print() {
		cout << "Model: ";
		for (size_t i = 0; i < strlen(model); ++i) {
			cout << model[i];
		}
		cout << "\nCountry: ";
		for (size_t i = 0; i < strlen(country); ++i) {
			cout << country[i];
		}
		cout << "\nYear: " << year;
		cout << "\nPrice: " << price;
	}

	~Car() {
		delete[] model;
		delete[] country;
	}
};

int main() {
	Car car("Tayota", "USA", 2008, 1'000'000);
	car.Print();
	cout << "\n\n";
	car.SetModel("Ferrari");
	car.Print();
}
