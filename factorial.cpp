#include "iostream"

using namespace std;

int factoral(int n){
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
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