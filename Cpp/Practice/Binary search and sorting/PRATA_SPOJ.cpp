#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isPossible(vector<int> cookRanks, int nP, int mid)
{

    int currentP = 0;

    for (int i = 0; i < cookRanks.size(); i++)
    {
        int R = cookRanks[i];
        int j = 1;
        int timeTaken = 0;

        while (true)
        {
            if (timeTaken + j * R <= mid)
            {
                currentP++;
                timeTaken += j * R;
                j++;
            }
            else
            {
                break;
            }
        }
        if (currentP >= nP)
        {
            return true;
        }
    }
    return false;
}

int minTimetoComplete(vector<int> cookRanks, int nP)
{
    int start = 0;
    int highestRankCook = *max_element(cookRanks.begin(), cookRanks.end());
    int end = highestRankCook * (nP * (nP + 1) / 2);
    int ans = -1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (isPossible(cookRanks, nP, mid))
        {
            ans = mid;
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return ans;
}

int main()
{

    int T;
    cin >> T;
    while (T--)
    {

        int nP, nC;
        cin >> nP >> nC;
        vector<int> cookRanks;
        while (nC--)
        {
            int R;
            cin >> R;
            cookRanks.push_back(R);
        }

        cout << "The minimum Time to complete : " << minTimetoComplete(cookRanks, nP) << endl;
    }

    return 0;
}