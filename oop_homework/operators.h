#pragma once
#include"MyString.h"

std::ostream& operator << (std::ostream& os, const MyString& string) {
	return os << string.getString();
}

std::istream& operator>>(std::istream& is, MyString& str) {
    char* temp = nullptr;
    int size = 0;
    initString(temp, size);
    str.setString(temp);
    delete[] temp;
    return is;
}