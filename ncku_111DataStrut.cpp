#include "iostream"

using namespace std;

void rearrange(int *arr,int length)
{
    int count = 0;
    for (int i = 0; i < length; i++)
    {
        if (arr[i] < 0)
        {
            int temp = arr[count];
            arr[count] = 0;
            arr[i] = temp;
            count++;
        }
    }
}

int main()
{
    int arr[6] = {56, 95, -8, 57, -2, -6};
    int *ptr = arr;
    int length = sizeof(arr)/sizeof(int);
    rearrange(ptr,length);

    for (int i : arr)
    {
        cout << i << endl;
    }

    return 0;
}