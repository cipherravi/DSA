#include <iostream>
#include <vector>
using namespace std;

int allocateBooks(int arr[], int k, int N);

int main()
{

    int arr[] = {12, 34, 67, 90};
    int k = 2;
    int N = sizeof(arr) / sizeof(arr[0]);
    int result = allocateBooks(arr, k, N);
    cout << "Result : " << result << endl;

    return 0;
}

int allocateBooks(int arr[], int k, int N)
{

    int S1 = 1;
    int S2 = N;
    vector<pair<int, int>> ans;
    int res1, res2 = 0, res = 0;
    int minMax = INT_MAX;

    if (N < k)
    {
        return -1;
    }
    for (int i = 0; i < S1; i++)
    {
        int sum1 = 0;
        int sum2 = 0;

        for (int k = 0; k < S1; k++)
        {
            sum1 += arr[k];
            cout << "K->" << arr[k] << endl;
        }

        res1 = sum1;
        cout << "sum 1 : " << sum1 << endl;

        for (int j = S1; j < S2; j++)
        {

            sum2 += arr[j];
            cout << "J->" << arr[j] << endl;
        }

        res2 = sum2;
        cout << "sum 2 : " << sum2 << endl;
        ans.push_back({res1, res2});

        if (S1 < N - 1)
            S1++;
    }
    cout << "RES 1 : " << res1 << endl;
    cout << "RES 2 : " << res2 << endl;

    for (const auto &p : ans)
    {
        int high = max(p.first, p.second);
        if (high < minMax)
        {
            minMax = high;
        }
    }

    cout << "Answer (min of max values): " << minMax << endl;
    return minMax;
}