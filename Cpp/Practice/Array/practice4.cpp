#include <iostream>
#include <vector>
using namespace std;

vector<int> returnSumIndex(int arr[], int N, int target)
{
    for (int i = 0; i < N; i++)
    {
        for (int j = i; j >= 0; j--)
        {
            if (arr[i] + arr[j] == target)
            {
                return {j, i};
            }
        }
    }
    return {};
}

int main()
{

    //************************ */ FIND DUPLICATE

    // int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 2, 3, 4, 5, 6, 8, 9};
    // int N = sizeof(arr) / sizeof(arr[0]);

    // int count = 0;
    // int input;

    // cout << "Type Number you want to find duplicate :" << " ";
    // cin >> input;

    // for (int i = 0; i < N; i++)
    // {

    //     if (input == arr[i])
    //     {
    //         count++;
    //     }
    // }
    // if (count > 1)
    // {
    //     cout << "Duplicate found " << " " << input << endl;
    // }
    // else if (count == 1)
    // {
    //     cout << "Number exists but no duplicate found" << endl;
    // }
    // else
    // {
    //     cout << "Number not found" << endl;
    // }

    //************************ */ FIND MISSING ELEMENT

    // int arr[] = {1, 2, 3, 4, 6, 7, 8, 9, 10}; // Missing number is 5

    // int N = sizeof(arr) / sizeof(arr[0]);

    // int expected_sum = N * (N + 1) / 2;
    // int actual_sum = 0;
    // for (int i = 0; i < N; i++)
    // {
    //     actual_sum += arr[i];
    // }
    // cout << "Missing element is :" << actual_sum - expected_sum << endl;

    //************************ */ TWO SUM LEETCODE PROBLEM

    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int target = 5;
    int N = sizeof(arr) / sizeof(arr[0]);

    vector<int> result = returnSumIndex(arr, N, target);

    if (!result.empty())
    {
        cout << "Indices are" << " " << result[0] << " " << result[1] << endl;
    }
    else
    {
        cout << "No pair found" << endl;
    }

    return 0;
}