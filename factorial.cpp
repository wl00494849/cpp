#include "iostream"

using namespace std;

int factoral(int n){

    // 0! = 1
    if (n <= 0)
    {
        return 1;
    }
    
    return n*factoral(n-1);
}

int main (){
    int res = factoral(5);
    cout << res << endl;
    return 0;
}