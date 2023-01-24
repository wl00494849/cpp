#include "iostream"

using namespace std;

int Euclidean(int a, int b)
{
    int temp = 1;
  
    while (temp != 0)
    {
        temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}

int main()
{
    int res = Euclidean(30,45);
    cout << res << endl;
    return 0;
}