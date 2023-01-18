#include "iostream"

using namespace std;

int recursion(int num)
{
    if(num == 0)
    {
        return 0;
    }
    if(num == 1)
    {
        return 1;
    }
    
    return num*recursion(num-1);
}

int main()
{
    int sum = recursion(3);
    cout << sum << endl;
    return 0;
}