#include <iostream>
using namespace std;
void print(int arr[], int n);
int main()
{	
	int arr[]{1,2,3,4,5,6,7};
	print(arr, 7);
	return 0;
}
void print(int arr[], int n)
{		

	if(n == 1)
		cout<< arr[0];
	else
	{
		print(arr, n-1);
		cout << arr[n-1];
	}
}
