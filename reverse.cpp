#include "iostream"

using namespace std;

void reverse(int *arrPtr,int length){
    for (int i = 0; i < length/2; i++)
    {
        swap(arrPtr[i],arrPtr[length-i-1]);
    }
}

int main()
{
    int arr[] = {5, 12, 13, 15, 23, 25, 26, 34,99};
    int length = sizeof(arr) / sizeof(int);
    int *ptr = arr;

    reverse(ptr,length);
    
    for (int i = 0; i < length; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}