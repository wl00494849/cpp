#include "iostream"

using namespace std;
int calculate(int b, int e)
{
    if (e == 0)
    {
        return 1;
    }
    if (b == 0)
    {
        return 0;
    }
    int sum = b;
    for (int i = 1; i < e; i++)
    {
        sum = sum * b;
    }
    return sum;
}

int main()
{
    int res = calculate(2,10);
    int res1 = calculate(2,0);
    cout << res << endl;
    cout << res1 <<endl;
}