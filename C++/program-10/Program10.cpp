// Program 10.cpp
// Reverse words in a given string

#include <iostream>
#include<string>

using namespace std;

string reverse_string(string str) {
	string temp_str = str;
	int index_pos = 0;

	for (int x = temp_str.length() - 1; x >= 0; x--)
	{

		str[index_pos] = temp_str[x];
		//cout << str[index_pos];
		index_pos++;
	}
	return str;
}

int main()
{
	//taking string input
	string str;
	char str1[100];
	cout << "String: ";
	cin.getline(str1, 25);

	int j = 0, begin, end, temp;

	//reverse whole string
	str = reverse_string(str1);
	//reverse each word seperately
	for (int i = 0; i < str.length(); i++) {
		if (str[i] == ' ' || str[i] == '\0') {
			for (begin = j, end = i - 1; begin < (i + j) / 2; begin++, end--) {
				temp = str[begin];
				str[begin] = str[end];
				str[end] = temp;
			}
			j = i + 1;
		}
	}
	//printing the words
	cout << str;
}
