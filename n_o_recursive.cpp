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
	if(n<0) { return 0; }
	cout << n << " ";
	printNumbers(n - 1);
}
