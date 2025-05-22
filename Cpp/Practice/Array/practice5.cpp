#include <iostream>
using namespace std;
int main()
{

    //********************************** */ Binary Serarch

    // int arr[8] = {1, 2, 3, 4, 5, 6, 7};
    // int N = sizeof(arr) / sizeof(arr[0]);
    // int start = 0;
    // int end = N - 1;
    // int target = 4;
    // // int mid = (start + end) / 2; it can lead to overflow
    // int mid = start + (end - start) / 2; // result same you can equate this as well

    // while (start <= end)
    // {

    //     if (arr[mid] == target)
    //     {
    //         cout << "Target is at Index:" << mid << endl;
    //         break;
    //     }
    //     else if (target > arr[mid])
    //     {
    //         start = mid + 1;
    //     }
    //     else
    //     {
    //         end = mid - 1;
    //     }
    //     int mid = start + (end - start) / 2;
    // }

    //********************************** */ Find first occurence in array using Binary search

    // int arr[] = {1, 2, 3, 3, 4, 4, 4, 4, 4, 4, 5, 6, 7};
    // int N = sizeof(arr) / sizeof(arr[0]);
    // int start = 0;
    // int end = N - 1;
    // int mid = start + (end - start) / 2;
    // int target = 4;
    // int result = -1;
    // while (start <= end)
    // {
    //     if (arr[mid] == target)
    //     {
    //         result = mid;
    //         end = mid - 1;
    //     }
    //     else if (arr[mid] < target)
    //     {
    //         start = mid + 1;
    //     }
    //     else if (arr[mid] > target)
    //     {
    //         end = mid - 1;
    //     }
    //     mid = start + (end - mid) / 2;
    // }
    // cout << "Fist occurrence found at index :" << result << endl;

    //********************************** */ Total occurence occurence in array using Binary search

    // int arr[] = {1, 2, 3, 3, 4, 4, 4, 4, 4, 4, 5, 6, 7};
    // int N = sizeof(arr) / sizeof(arr[0]);
    // int start = 0;
    // int end = N - 1;
    // int mid;
    // int target = 4;
    // int firstOccurence = -1;
    // int lastOccurence = -1;

    // // Find first occurence and last occurence then do math => last occr - first occur + 1
    // while (start <= end)
    // {
    //     mid = start + (end - start) / 2;

    //     if (arr[mid] == target)
    //     {
    //         firstOccurence = mid;
    //         end = mid - 1;
    //     }
    //     else if (arr[mid] < target)
    //     {
    //         start = mid + 1;
    //     }
    //     else if (arr[mid] > target)
    //     {
    //         end = mid - 1;
    //     }
    // }
    // // Reset start and end for next loop to work perfectly
    // start = 0;
    // end = N - 1;
    // while (start <= end)
    // {
    //     mid = start + (end - start) / 2;

    //     if (arr[mid] == target)
    //     {
    //         lastOccurence = mid;
    //         start = mid + 1;
    //     }
    //     else if (arr[mid] <= target)
    //     {
    //         start = mid + 1;
    //     }
    //     else if (arr[mid] > target)
    //     {
    //         end = mid - 1;
    //     }
    // }

    // int totalOccurence = lastOccurence - firstOccurence + 1;

    // cout << "Total occurence is :" << totalOccurence << endl;

    // SOLVED LEETCODE QUESTION ON LEETCODE PLATFORM WHICH IS FIND PEAK ELEMENT but with in time constraint of log(n)

    return 0;
}