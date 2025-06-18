#include <iostream>
using namespace std;

bool isPalindrome(char text[])
{

    int N = strlen(text);
    int i = 0;
    int j = N - 1;

    while (i < j)
    {
        if (text[i] != text[j])
        {
            return false;
        }
        i++;
        j--;
    }
    return true;
}

int main()
{
    char text[30];
    cin >> text;
    cout << "Is " << text << " a palindrome ? : " << isPalindrome(text) << endl;
    return 0;
}