#include "iostream"
#include "vector"

using namespace std;

bool chickElement(vector<int> arrN, vector<int> arrM, int *time)
{
    while (arrM.size() != 0)
    {
        int m = arrM.back();
        int n = arrN.back();
        for (int i = 0; i < arrN.size(); i++)
        {
            if (arrN[i] == m)
            {
                return false;
            }
        }
        arrM.pop_back();

        for (int i = 0; i < arrM.size(); i++)
        {
            if (arrM[i] == n)
            {
                return false;
            }
        }
        arrN.pop_back();
        *time = ++*time;
    };
    return true;
}

int main()
{
    int time = 0;
    int *ptr = &time;
    vector<int> vM = {1,5,6,9};
    vector<int> vN = {2,3,7,11,17,20};

    bool res = chickElement(vN, vM, ptr);

    cout << res << endl;
    cout << time << endl;
    return 0;
}