#pragma once
#include<iostream>

class MyString {
public:
	//constructors
	MyString();
	MyString(const char* string);
	MyString(size_t n, char c);
	MyString(const MyString& other);
	~MyString();

	//functions
	void input();
	void output();
	bool MyStrStr(const char* str); // searching for a substring in a string
	int MyChr(const char value);
	void MyStrCat(const MyString& other);
	void MyDelChr(const char c);
	int MyStrCmp(const MyString& other);
	void MyStrcpy(const MyString& other);

	//Getters and Setters	
	//(these methods anyway are inline, so i didn`t move it out of the class)
	char* getString() { return str; }
	int   MyStrLen() { return lenght; }
	void  setString(const char* string);
	//    setLenght() may be unsafe

	//static variables
	static unsigned string_counter;
private:
	char* str;
	int lenght;
};

