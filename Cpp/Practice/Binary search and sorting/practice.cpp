#include <iostream>
using namespace std;
int main()
{

    ///****************/ FIND MISSING ELEMENT

    // int arr[] = {1, 2, 3, 4, 5, 7, 8, 9};
    // int N = sizeof(arr) / sizeof(arr[0]);

    // int start = 0;
    // int end = N - 1;
    // int mid;

    // while (start <= end)
    // {
    //     mid = start + (end - start) / 2;
    //     if (mid == arr[mid] - 1)
    //     {

    //         start = mid + 1;
    //     }
    //     else
    //     {

    //         end = mid - 1;
    //     }
    // }
    // int result = arr[end] + 1;
    // cout << "Missing Number is : " << result << endl;

    //**********************/ Find Pivot using binary search

    // int arr[] = {4, 5, 6, 7, 1, 2};
    // int N = sizeof(arr) / sizeof(arr[0]);
    // int start = 0;
    // int end = N - 1;
    // int mid;
    // int result = -1;

    // while (start < end)
    // {
    //     mid = start + (end - start) / 2;
    //     if (arr[mid] > arr[end])
    //     {

    //         start = mid + 1;
    //     }

    //     else
    //     {

    //         end = mid;
    //         result = end; // This is the pivot point
    //     }
    // }

    // cout << "Pivot is : " << arr[result] << endl;

    //***************************/ Find square root of a number using binary search
    // int num;
    // cout << "Enter the no. to find square root : ";
    // cin >> num;
    // int start = 0;
    // int end = num;
    // int mid;
    // int result = -1;
    // while (start <= end)
    // {
    //     mid = start + (end - start) / 2;
    //     if (mid * mid == num)
    //     {
    //         result = mid;
    //         break;
    //     }
    //     else if (mid * mid > num)
    //     {
    //         end = mid - 1;
    //     }
    //     else
    //     {
    //         result = mid;
    //         start = mid + 1;
    //     }
    // }
    // cout << "Square root in integer is : " << result << endl;

    // //// Now one step more and find in  precision

    // int precision;
    // cout << "Enter no. of step : ";
    // cin >> precision;
    // double step = 0.1;
    // double finalAns = result;

    // for (int i = 0; i < precision; i++)
    // {
    //     for (double j = finalAns; j * j <= num; j += step)
    //     {
    //         finalAns = j;
    //     }
    //     step /= 10;
    // }
    // cout << "Square root of " << num << " is : " << finalAns << endl;

    //**********************// Find target in matrix using Binary search

    int arr[5][4] = {{1, 2, 3, 4},
                     {5, 6, 7, 8},
                     {9, 10, 11, 12},
                     {13, 14, 15, 16},
                     {17, 18, 19, 20}};

    int rows = 5;
    int cols = 4;
    int totalSize = rows * cols;
    int start = 0;
    int end = totalSize - 1;

    int mid;
    int target = 16;
    int result = -1;

    while (start <= end)
    {
        mid = start + (end - start) / 2;
        int row = mid / cols;
        int col = mid % cols;

        if (arr[row][col] == target)
        {
            result = 1;
            break;
        }
        else if (arr[row][col] > target)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    cout << "Found : " << result << endl;

    return 0;
}