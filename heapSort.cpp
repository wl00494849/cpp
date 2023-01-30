#include "iostream"

using namespace std;

void heapify(int arr[], int node, int i)
{
    int largest = i;
    int r = 2 * largest + 1;
    int l = 2 * largest + 2;

    if (r < node && arr[largest] < arr[r])
    {
        largest = r;
    }
    if (l < node && arr[largest] < arr[l])
    {
        largest = l;
    }
    if (i != largest)
    {
        swap(arr[largest],arr[i]);
        heapify(arr, node, largest);
    }
}

void heapSort(int arr[],int n){
    // heap root = n/2-1
    for (int i = n/2-1; i >= 0; i--)
    {
        heapify(arr,n,i);
    }
    for (int i = n-1; i >=0 ; i--)
    {
        swap(arr[0],arr[i]);
        heapify(arr,n,0);
    }
}

int main()
{
    int arr[] = {9,2,8,4,12,6,7,13,20};
    int lenght = sizeof(arr)/sizeof(int);
    heapSort(arr,lenght);

    for (int i : arr)
    {
        cout << i << " ";
    };

    cout << "" << endl;
    
    return 0;
}