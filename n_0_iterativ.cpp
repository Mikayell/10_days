#include <iostream>
using namespace std;
int printNumbers(int n);
int main()
{
	int n;
	cin >> n;
	printNumbers(n);
	return 0;
}
int printNumbers(int n)
{
	for(int i = n; i > -1; --i)
		cout << i;
}
