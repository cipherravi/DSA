#include <iostream>
using namespace std;
int main()
{

    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 12, 23, 34, 45, 56, 67, 78, 89, 99, 142, 163, 174, 184, 186, 244, 275, 345};

    int start = 0;
    int end = 0;
    int x = 142;
    int found = 0;

    int i = 1;
    while (arr[i] <= x && arr[i] != 0)
    {

        if (arr[0] == x)
        {
            cout << "Found " << x << " at " << "0 index" << endl;

            break;
        }
        else if (arr[i] < x)
        {
            start = i;
            end = i * 2;
        }
        else if (arr[i] == x)
        {
            found = 1;
            cout << "Found " << x << " at " << i << " index" << endl;
            break;
        }
        i = i * 2;
    }

    if (!found)
    {
        int gotElem = 0;
        int mid;
        while (start <= end)
        {

            mid = start + (end - start) / 2;

            if (abs(arr[mid]) > x)
            {
                end = mid - 1;
            }
            else if (abs(arr[mid]) < x)
            {
                start = mid + 1;
            }
            else if (arr[mid] == x)
            {
                cout << "Found " << arr[mid] << " at " << mid << " index" << endl;
                gotElem = 1;
                break;
            }
        }
        if (!gotElem)
        {
            cout << "No found" << endl;
        }
    }

    return 0;
}