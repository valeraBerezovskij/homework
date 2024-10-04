#include<iostream>
#include"MyString.h"
using namespace std;

int main()
{
	MyString a("Hello");
	MyString b(" World!");
	a.MyStrCat(b);
	a.output();
	if (a.MyStrStr("Wor")) {
		cout << "'Wor' is in a string." << endl;
	}
	a.MyDelChr('W');
	a.output();
	if (a.MyChr('W') == -1) {
		cout << "'W' isn`t in a string." << endl;
	}
	a.setString("New String!");
	a.output();
	b.setString("strcpy func");

	a.MyStrcpy(b);
	a.output();
}
