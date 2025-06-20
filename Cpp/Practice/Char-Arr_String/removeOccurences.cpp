#include <iostream>
#include <string>
using namespace std;
int main()
{

    string s = "daabcbaabcbc";
    string part = "abc";

    // for (int i = 0; i < s.length(); i++)
    // {
    //     if (s.length() >= 3 && s[i] == 'a' && s[i + 1] == 'b' && s[i + 2] == 'c')
    //     {
    //         s.erase(i, 3);
    //         i = 0;
    //     }
    // }

    size_t pos = s.find(part);
    while (pos != string::npos)
    {
        s.erase(pos, part.length());
        pos = s.find(part);
    }

    cout << "Final string : " << s << endl;

    return 0;
}