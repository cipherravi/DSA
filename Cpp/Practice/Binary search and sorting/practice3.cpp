#include <iostream>
#include <vector>
using namespace std;

vector<int> findKclosest(int arr[], int x, int k, int n);

int main()
{

    int arr[] = {1, 2, 3, 4, 5}; // 2,1,0,1,2 => 0,1,1,2,2 => 3,2,4,1,5
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 3;
    int k = 4;
    vector<int> res = findKclosest(arr, x, k, n);
    for (int val : res)
    {
        cout << val << " ";
    }
    cout << endl;

    return 0;
};

vector<int> findKclosest(int arr[], int x, int k, int n)
{
    vector<pair<int, int>> diff_with_values;

    // store (distance , values)
    for (int i = 0; i < n; i++)
    {
        diff_with_values.push_back({abs(arr[i] - x), arr[i]});
    }

    // Sort by distance (first element of pair)
    sort(diff_with_values.begin(), diff_with_values.end());

    vector<int> result;
    for (int i = 0; i < k; i++)
    {
        result.push_back(diff_with_values[i].second);
    }
    return result;
}