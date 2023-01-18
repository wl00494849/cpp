#include "iostream"
#include "vector"

using namespace std;

int recursiveSum(vector<vector<int>> nums, int row, int col)
{
    if (row == 0 && col == 0)
    {
        return nums[0][0];
    }
    if (col == 0)
    {
        return recursiveSum(nums, row - 1, nums[row - 1].size()-1) + nums[row][col];
    }
    return recursiveSum(nums, row, col - 1) + nums[row][col];
}

int main()
{
    vector<vector<int>> nums = {{3, 8}, {9, 13}};
    int res = recursiveSum(nums, nums.size() - 1, nums[0].size() - 1);
    cout << res << endl;
    return 0;
}