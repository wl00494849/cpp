#include "iostream"

using namespace std;

void heapfly(int arr[],int n,int i){
    int largest = i;
    int l = i*2+1;
    int r = i*2+2;
    if (l < n && arr[l]>arr[largest])
    {
        largest = l;
    }
    if (r < n && arr[r] > arr[largest]){
        largest = r;
    }
    if (largest != i)
    {
        swap(arr[largest],arr[i]);
        heapfly(arr,n,largest);
    }
}

void heapDelete(int arr[],int n){
    arr[0] = arr[n-1];
    heapfly(arr,n-1,0);
}

int main(){
    return 0;
}