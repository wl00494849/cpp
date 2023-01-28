#include "iostream"

using namespace std;

void reverse(int n){
    if (n/10 == 0)
    {
        cout << n << endl;
        return;
    }
    cout << n%10;
    reverse(n/10);
}

int main(){
    int i = 9876;
    reverse(i);
    return 0;
}