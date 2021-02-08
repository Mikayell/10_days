#include <iostream>
#include <string>
#include <cstring>
using namespace std;
string str_reverse(string str);
int main()
{
	string str;
	cin >> str;
	int size = sizeof(str);
	cout << str_reverse(str);
	return 0; 
}
string str_reverse(string str)
{
	string n_str = "";
	int size = str.size();
	for(int i = size-1; i >= 0; --i)
	{
		n_str += str[i]	;
	}
	return n_str;
}
