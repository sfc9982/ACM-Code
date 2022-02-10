#include <iostream>
#include <cstring>
#include <string>
#include <iomanip>
#include <algorithm>
#include <cmath>
#include <vector>

using namespace std;

void
backtrack(const vector<int> &nums, vector<vector<int>> &res, vector<int> path, vector<int>::size_type start, int remain)
{
    if (start > nums.size()) return;
    if (remain == 0)
    {
        res.push_back(path);
        return;
    }
    for (auto i = start; i < nums.size(); i++)
    {
        path.push_back(nums[i]);
        backtrack(nums, res, path, i + 1, remain - 1);
        path.pop_back();
    }
}

vector<vector<int>> solve(int n, int k)
{
    vector<int> nums(n, 0);
    for (int i = 1; i <= n; i++)
    {
        nums[i - 1] = i;
    }
    vector<vector<int>> res;
    backtrack(nums, res, {}, 0, k);
    return res;
}


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);

    int n, k;
    cin >> n >> k;
    vector<vector<int>> ans = solve(n, k);
    sort(ans.begin(), ans.end());
    for (auto i = ans.begin(); i < ans.end(); ++i)
    {
        for (auto j: *i)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}