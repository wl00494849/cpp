#include "iostream"

using namespace std;

int BstSearch(int arr[],int target,int low,int high){
    if (low > high)
    {
        //-1 = false
        return -1;
    }

    int mid = (low+high)/2;

    if (arr[mid] == target)
    {
        return mid;
    }else if (target < arr[mid])
    {
        return BstSearch(arr,target,low,mid-1);
    }
    return BstSearch(arr,target,mid+1,high);    
}

int main(){
    int arr[9]={1,3,5,9,13,15,17,19,26};

    int res = BstSearch(arr,31,0,9);
    cout << res << endl;

    return 0;
}