#include <iostream>

using namespace std;
#include <vector>

int findUnique(vector<int> arr, int arrSize)
{
    int ans = 0;

    for (int i = 0; i < arrSize; i++)
    {
        ans ^= arr[i];
    }

    return ans;
}

int main()
{
    // cout << "Hello dosto\n";

    // int arr[10] = {3, 4, 67, 4, 3, 5, 64, 54, 65, 454};
    // int len = sizeof(arr) / 4;

    // for (int i = 0; i < len; i++)
    // {
    //     cout << arr[i] << endl;
    // }

    //     cout << len << endl;

    /***************/

    vector<int> arr = {3, 5, 6, 5, 4, 6, 3};
    int arrSize = arr.size();
    int uniqueElement = findUnique(arr, arrSize);
    cout << "UniqueElement is :" << uniqueElement << endl;
    return 0;
}