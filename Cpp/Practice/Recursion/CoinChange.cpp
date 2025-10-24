#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

pair<int, vector<int>> solve(vector<int> &arr, int target)
{
    // base case
    if (target == 0)
        return {0, {}};
    if (target < 0)
        return {INT_MAX, {}};

    // solve one case
    vector<int> bestCombo;
    int mini = INT_MAX;
    for (int i = 0; i < arr.size(); i++)
    {
        auto result = solve(arr, target - arr[i]);
        int ans = result.first;
        if (ans != INT_MAX && ans + 1 < mini)
        {
            mini = ans + 1;
            bestCombo = result.second;
            bestCombo.push_back(arr[i]);
        }
    }

    return {mini, bestCombo};
}

int main()
{

    vector<int> arr = {1, 2, 3};
    int target = 10;

    auto result = solve(arr, target);
    if (result.first == INT_MAX)
    {
        cout << "No combination found. \n";
    }
    else
    {
        cout << "Minimum count: " << result.first << endl;
        cout << "Numbers used: ";
        for (int val : result.second)
        {
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}