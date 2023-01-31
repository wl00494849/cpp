#include "iostream"

using namespace std;

void heapfly(int arr[], int n, int i)
{
    int parent = (i - 1) / 2;
    if (arr[parent] > 0)
    {
        if (arr[i] > arr[parent])
        {
            swap(arr[i], arr[parent]);
            heapfly(arr, n, parent);
        }
    }
}
// n = heapNode count
void heapInsertion(int arr[], int n, int val)
{
    n = n + 1;
    arr[n - 1] = val;
    heapfly(arr, n, n - 1);
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";

    cout << "\n";
}

int main()
{
    int arr[6] = {10, 5, 3, 2, 4};
    heapInsertion(arr, 5, 18);
    printArray(arr, 6);
    return 0;
}