#include <iostream>
using namespace std;
int main()
{

    //*************************//  SEARCH IN A NEARLY SORTED ARRAY USING BINARY SEARCH

    // int arr[] = {10, 3, 40, 20, 50, 80, 70};
    // int N = sizeof(arr) / sizeof(arr[0]);
    // int start = 0;
    // int end = N - 1;
    // int mid;
    // int result = -1;
    // int target = 10;
    // while (start < end)
    // {
    //     mid = start + (end - start) / 2;
    //     if (arr[mid] == target)
    //     {
    //         result = mid;
    //         break;
    //     }
    //     else if (arr[mid - 1] == target && mid - 1 >= start)
    //     {
    //         result = mid - 1;
    //         break;
    //     }
    //     else if (arr[mid + 1] == target && mid + 1 <= end)
    //     {
    //         result = mid + 1;
    //         break;
    //     }
    //     else if (arr[mid] > target)
    //     {
    //         end = mid - 2;
    //     }
    //     else
    //     {
    //         start = mid + 2;
    //     }
    // }
    // cout << " Target found at : " << result << endl;

    //*****************************// DIVIDE TWO NUMBERS USING BINARY SEARCH

    // int dividend = 21;
    // int divisor = 22;
    // int start = 0;
    // int end = abs(dividend);
    // int mid;
    // int result = 0;

    // while (start <= end)
    // {
    //     mid = start + (end - start) / 2;
    //     if (abs(mid * divisor) == abs(dividend))
    //     {
    //         result = mid;
    //         break;
    //     }
    //     else if (abs(mid * divisor) > abs(dividend))
    //     {
    //         end = mid - 1;
    //     }
    //     else
    //     {
    //         result = mid;
    //         start = mid + 1;
    //     }
    // }

    // if ((dividend < 0 && divisor < 0) || (dividend > 0 && divisor > 0))
    // {
    //     result = result;
    // }
    // else
    // {
    //     result = -result;
    // }

    // cout << "Division : " << dividend << "/" << divisor << " = " << result << endl;

    /***************************/ // FIND ODD OCCURING ELEMENT IN AN ARRAY using binary search

    vector<int> arr{1, 1, 2, 2, 3, 3, 4, 4, 3, 5, 5, 100, 100, 4, 4};
    int N = arr.size();
    int start = 0;
    int end = N - 1;
    int mid;
    // cout << N << end;
    int ans = -1;

    while (start <= end)
    {

        mid = start + (end - start) / 2;
        if (start == end)
        {
            ans = arr[start];
            break;
        }
        else if (mid % 2 == 0)
        {
            if (arr[mid] == arr[mid + 1])
            {
                cout << "inside even if" << endl;
                cout << mid << endl;
                start = mid + 2;
            }
            else
            {

                end = mid;
            }
        }
        else
        {

            if (arr[mid] == arr[mid - 1])
            {
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }
    }

    cout << "Odd occuring element is : " << ans << endl;

    return 0;
}