#include <iostream>
using namespace std;
#include <limits.h>
int main()
{

    //******************************** */  ROTATE MATRIX BY 90

    // int arr[3][3] = {{1, 2, 3},
    //                  {4, 5, 6},
    //                  {7, 8, 9}};

    // int N = sizeof(arr) / sizeof(arr[0]);

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
    //         cout << arr[i][j] << ' ';
    //     }
    //     cout << endl;
    // }

    // for (int row = 0; row < 3; row++)
    // {
    //     int start = 0;
    //     int end = 2;
    //     while (start < end)
    //     {
    //         swap(arr[row][start], arr[row][end]);
    //         start++;
    //         end--;
    //     }
    // }
    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         cout << arr[i][j] << ' ';
    //     }
    //     cout << endl;
    // }

    //******************************** */ SPIRAL PRINT

    // int arr[3][3] = {{1, 2, 3},
    //                  {4, 5, 6},
    //                  {7, 8, 9}};
    // int top = 0;
    // int bottom = 2;
    // int left = 0;
    // int right = 2;

    // while (top <= bottom && left <= right)
    // {
    //     for (int i = left; i <= right; i++)
    //     {
    //         cout << arr[top][i] << " ";
    //     }
    //     top++;
    //     for (int i = top; i <= bottom; i++)
    //     {
    //         cout << arr[i][right] << " ";
    //     }
    //     right--;
    //     if (top <= bottom)
    //     {

    //         for (int i = right; i >= left; i--)
    //         {
    //             cout << arr[bottom][i] << " ";
    //         }
    //     }
    //     bottom--;
    //     if (left <= right)
    //     {
    //         for (int i = bottom; i >= top; i--)
    //         {
    //             cout << arr[i][left] << " ";
    //         }
    //         left++;
    //     }
    // }
    // cout << endl;

    //******************************** */ WAVE PRINT

    // int arr[3][3] = {{1, 2, 3},
    //                  {4, 5, 6},
    //                  {7, 8, 9}};

    // for (int col = 0; col < 3; col++)
    // {
    //     if (col % 2 == 0)
    //     {

    //         for (int row = 0; row < 3; row++)
    //         {
    //             cout << arr[row][col] << " ";
    //         }
    //     }
    //     else
    //     {

    //         for (int row = 2; row >= 0; row--)
    //         {
    //             cout << arr[row][col] << " ";
    //         }
    //     }
    // }
    // cout << endl;

    //******************************** */ ZIG-ZAG PRINT

    // int arr[3][3] = {{1, 2, 3},
    //                  {4, 5, 6},
    //                  {7, 8, 9}};

    // for (int row = 0; row < 3; row++)
    // {
    //     if (row % 2 == 0)
    //     {

    //         for (int col = 0; col < 3; col++)
    //         {
    //             cout << arr[row][col] << " ";
    //         }
    //     }
    //     else
    //     {
    //         for (int col = 2; col >= 0; col--)
    //         {
    //             cout << arr[row][col] << " ";
    //         }
    //     }
    // }
    // cout << endl;

    //******************************** */ SORT 0's 1's and 2's

    // int arr[9] = {1, 2, 0, 2, 0, 1, 0, 1, 2};
    // int N = sizeof(arr) / sizeof(arr[0]);
    // int start = 0;
    // int mid = 0;
    // int end = N - 1;
    // while (mid <= end)
    // {
    //     if (arr[mid] == 0)
    //     {
    //         swap(arr[start], arr[mid]);
    //         start++;
    //         mid++;
    //     }
    //     else if (arr[mid] == 1)
    //     {
    //         mid++;
    //     }
    //     else
    //     {
    //         swap(arr[mid], arr[end]);
    //         end--;
    //     }
    // }

    // for (int i = 0; i < N; i++)
    // {
    //     cout << arr[i] << " ";
    // }
    // cout << endl;

    //******************************** */ MOVE NEGATIVE one side

    int arr[] = {-1, 2, 4, 5, 6, 7, 8, -3, -7, -45, -34, 23, -76};

    int N = sizeof(arr) / sizeof(arr[0]);

    int start = 0;
    int posIndex = 0;

    for (int i = 0; i < N; i++)
    {

        if (arr[i] > start)
        {
            int temp = arr[i];
            // Shift everything from posIndex to i - 1 right
            for (int j = i; j > posIndex; j--)
            {
                arr[j] = arr[j - 1];
            }
            arr[posIndex] = temp;
            posIndex++;
        }
    }
    for (int i = 0; i < N; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
