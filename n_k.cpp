#include <iostream>
#include <cmath>
using namespace std;
int first_k(int n, int k);
int main()
{
	int n, k;
	cin >> n >> k;
	cout << first_k(n,k);
	return 0;
}
int first_k(int n, int k)
{	
	int length = to_string(n).length();
	if(k > length)
		return 0;
	else
		return  n / pow(10,(length - k));
}
