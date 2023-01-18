#include "iostream"

using namespace std;

int main()
{
    int row = 2;
    int col = 2;
    int A[row][col] = {{1, 3}, {2, 5}};
    int B[row][col] = {{4, 2}, {2, 3}};
    int Result[row][col] = {};
    
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            for (int k = 0; k < col; k++)
            {
                cout << A[i][k] << "+";
                cout << B[k][j] << "+";
                Result[i][j] += A[i][k] + B[k][j];
            }
            cout << "=" << Result[i][j] << endl;
        }
    }

    // for (int i = 0; i < row; i++)
    // {
    //     for (int j = 0; j < col; j++)
    //     {
    //         cout << Result[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    return 0;
}