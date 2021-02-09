#include <iostream>
using namespace std;
void delelem(int*&arr, int n, int size);
int main()
{
        int * arr = new int[9]{1,2,3,4,5,6,7,8,9};
        delelem(arr,3,9);
        for(int i = 0; i < 8; ++i)
                cout << arr[i];
        delete [] arr;
        return 0;
}
void delelem(int* &arr, int n, int size)
{
        int j = 0;
        int * tmp = new int[size - 1];
        for(int i = 0; i < size; ++i){
                if (i == n) {continue; }
                tmp[j] = arr[i];
                ++j;
        }
        delete[] arr;
        arr = tmp;
}
