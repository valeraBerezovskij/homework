#include<iostream>
#include <cstring>
using namespace std;

void initString(char*& str);

class Laptop {
private:
	char* model;
	char* cpu_name;
	char* video_card;

	int warantee;
	double price;
public:
	Laptop(const char* model_, const char* cpu_name_, const char* video_card_, const int warantee, const double price);
	Laptop();
	~Laptop();

	void input();
	void print();

	//Getters
	char* GetModel() const;
	char* GetCPU() const;
	char* GetVideoCard() const;
	int GetWarantee() const;
	double GetPrice() const;

	//Setters
	void SetModel(const char* model_);
	void SetCPU(const char* cpu_);
	void SetVideoCard(const char* video_card);
	void SetWarantee(int warantee_);
	void SetPrice(double price_);
};


Laptop::Laptop(const char* model_, const char* cpu_name_, const char* video_card_, const int warantee_, const double price_) {
	SetModel(model_);
	SetCPU(cpu_name_);
	SetVideoCard(video_card_);
	warantee   = warantee_;
	price      = price_;
}

Laptop::Laptop() {
	model = nullptr; cpu_name = nullptr; video_card = nullptr;
	warantee = 0; price = 0;
}

Laptop::~Laptop() {
	delete[] model;
	delete[] cpu_name;
	delete[] video_card;
}

void Laptop::input() {
	cout << "Enter model of laptop: ";      initString(model);
	cout << "Enter CPU name: ";             initString(cpu_name);
	cout << "Enter video card: ";           initString(video_card);
	cout << "Enter duration of warranty: "; cin >> warantee;
	cout << "Enter price: ";                cin >> price;
}

void Laptop::print() {
	cout << "Model: "                << GetModel()     << '\n';
	cout << "CPU: "                  << GetCPU()       << '\n';
	cout << "Video card: "           << GetVideoCard() << '\n';
	cout << "Duration of warranty: " << GetWarantee()  << '\n';
	cout << "Price: "                << GetPrice();
}

//Getters
char* Laptop::GetCPU()       const { return cpu_name; }
char* Laptop::GetModel()     const { return model; }
char* Laptop::GetVideoCard() const { return video_card; }
int   Laptop::GetWarantee()  const { return warantee; }
double Laptop::GetPrice()    const { return price; }

//Setters
void Laptop::SetModel(const char* model_) {
	if(model != nullptr){ delete[] model; }
	model = new char[strlen(model_) + 1];
	strcpy_s(model, strlen(model_) + 1, model_);
}

void Laptop::SetCPU(const char* cpu_) {
	if (cpu_name != nullptr) { delete[] cpu_name; }
	cpu_name = new char[strlen(cpu_) + 1];
	strcpy_s(cpu_name, strlen(cpu_) + 1, cpu_);
}

void Laptop::SetVideoCard(const char* video_card_) {
	if (video_card != nullptr) { delete[] video_card; }
	video_card = new char[strlen(video_card_) + 1];
	strcpy_s(video_card, strlen(video_card_) + 1, video_card_);
}

void Laptop::SetWarantee(int warantee_) { warantee = warantee_; }
void Laptop::SetPrice(double price_)    { price = price_; }

void initString(char*& str) {
	if (str != nullptr) {
		delete[] str;
	}
	char* temp;
	int size = 10;
	str = new char[size + 1];
	int i = 0; char ch;

	while (cin.get(ch)) {
		if (ch == '\n') { break; }

		if (i + 1 == size) {
			size += 4;
			temp = new char[size + 1];
			strncpy_s(temp, size + 1, str, i);
			delete[] str;
			str = temp;
		}
		str[i] = ch; 
		++i;
	}
}

int main() 
{
	Laptop omen("omen", "Intel", "rtx", 360, 1000);
	omen.input();
	omen.print();
}


