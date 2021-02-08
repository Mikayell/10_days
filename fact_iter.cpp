// factorial
#include <iostream>
using namespace std;
int fact(int n);
int main()
{
	int n;
	cin >> n;
	cout << fact(n);
	return 0;
}
int fact(int n)
{
	int result = 1;
	for(int i = 1; i <= n; ++i)
	{
		result *= i;
	}
	return result;
}
