//Camel case the input stirng

#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

void main() {

	string str;
	char cstr[100];
	cin.getline(cstr, 100);
	str = cstr;
	for (int i = 0; i < str.length(); i++) {
		if (i == 0)
			str[i] = toupper(str[i]);
		else if (str[i - 1] == ' ')
			str[i] = toupper(str[i]);
	}
	cout << "\n" << str;
}