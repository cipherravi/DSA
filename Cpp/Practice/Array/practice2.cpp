#include <iostream>
#include <limits.h>
#include <utility>
#include <vector>
using namespace std;

pair<int, int> finMaxAndMin(int arr[][3], int rows, int cols)
{
    int max = INT_MIN, min = INT_MAX;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {

            if (max < arr[i][j])
            {
                max = arr[i][j];
            }
            if (min > arr[i][j])
            {
                min = arr[i][j];
            }
        }
    }
    // cout << "Max no is : " << max << endl;
    // cout << "Min no is : " << min << endl;
    return make_pair(max, min);
}

int main()
{
    // // sort 0 and 1s

    // int arr[] = {1, 0, 0, 0, 1, 1, 0, 1, 1, 0};
    // int n = sizeof(arr) / sizeof(arr[0]);

    // int start = 0;
    // int end = n - 1;

    // while (start < end)
    // {
    //     while (arr[start] == 0 && start < end)
    //     {
    //         start++;
    //     }
    //     while (arr[end] == 1 && start < end)
    //     {
    //         end--;
    //     }
    //     if (start < end)
    //     {
    //         swap(arr[start], arr[end]);
    //         start++;
    //         end--;
    //     }
    // }

    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i] << " ";
    // }
    // cout << endl;

    //************************** */

    // 2D Array

    // int arr[2][3] = {{1, 8, 6},
    //                  {2, 9, 4}};

    // cout << arr[1][1] << endl;

    // // Row wise
    // for (int i = 0; i < 2; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         cout << arr[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    // // Column wise
    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 2; j++)
    //     {
    //         cout << arr[j][i] << " ";
    //     }
    //     cout << endl;
    // }

    /******************************* */
    // // Row Sum

    // int arr[2][3] = {{1, 8, 6},
    //                  {2, 9, 2}};

    // for (int row = 0; row < 2; row++)
    // {
    //     int rowSum = 0;
    //     for (int col = 0; col < 3; col++)
    //     {
    //         rowSum += arr[row][col];
    //     }
    //     cout << rowSum << " ";
    // }
    // cout << endl;

    // //Column Sum

    // int arr[2][3] = {{1, 8, 6},
    //                  {2, 9, 2}};

    // for (int row = 0; row < 3; row++)
    // {
    //     int colSum = 0;
    //     for (int col = 0; col < 2; col++)
    //     {
    //         colSum += arr[col][row];
    //     }
    //     cout << colSum;
    //     cout << endl;
    // }

    /******************************* */

    // // Linear search

    // int arr[2][3] = {{1, 8, 6},
    //                  {2, 9, 2}};

    // int searchFor;
    // cout << "Enter what you want to search :";
    // cin >> searchFor;
    // bool result;

    // for (int row = 0; row < 2; row++)
    // {
    //     for (int col = 0; col < 3; col++)
    //     {
    //         if (searchFor == arr[row][col])
    //         {
    //             result = true;
    //             cout << searchFor << " " << "Exists" << endl;
    //         }
    //     }
    // }
    // if (!result)
    //     cout << searchFor << " " << "Doesn't exists" << endl;

    /******************************* */
    // // Max and min search

    // int arr[2][3] = {{1, 8, 6},
    //                  {2, 9, 2}};

    // pair<int, int> result = finMaxAndMin(arr, 2, 3);
    // cout << "Max no is :" << result.first << endl;
    // cout << "Min no is :" << result.second << endl;

    /******************************* */
    // // Transpose a matrix

    // row-> col & col-> row

    // int arr[2][3] = { {1, 8, 6},
    //                   {2, 9, 2} }

    // int arr[3][3] = {{1, 8, 6},
    //                  {2, 9, 2},
    //                  {4, 5, 7}};

    // for (int row = 0; row < 3; row++)
    // {
    //     for (int col = row + 1; col < 3; col++)
    //     {
    //         swap(arr[row][col], arr[col][row]);
    //     }
    // }

    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         cout << arr[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    /******************************* */

    // // 2D vector

    // vector<vector<int>> arr(5, vector<int>(5, -8));
    // for (int i = 0; i < arr.size(); i++)
    // {
    //     for (int j = 0; j < arr[i].size(); j++)
    //     {
    //         cout << arr[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    vector<vector<int>> arr;
    vector<int> a{1, 2, 3, 4};

    vector<int> b{1, 2, 3, 4, 5, 6};

    vector<int> c{1, 7, 3, 4, 5, 6};
    arr.push_back(a);
    arr.push_back(b);
    arr.push_back(c);

    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr[i].size(); j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
