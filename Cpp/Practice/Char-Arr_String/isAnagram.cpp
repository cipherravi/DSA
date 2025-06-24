#include <iostream>
using namespace std;
int main()
{

    // Brute force

    string s = "anagram", t = "nagaram";
    // string s = "a", t = "ab";

    int count = 0;
    if (s.length() != t.length())
    {
        cout << "It is not an anagram" << endl;
    }
    for (int i = 0; i < s.length(); i++)
    {

        for (int j = 0; j < t.length(); j++)
        {
            bool match = s[i] == t[j];
            if (match)
            {
                count++;
                t.erase(j, 1);
                break;
            }
        }
    }
    if (count == s.length())
    {
        cout << "It is an anagram" << endl;
    }
    else
    {
        cout << "It is not an anagram" << endl;
    }

    return 0;
}

// Optimal solution
//     bool isAnagram(string s, string t) {

//         if(s.length() != t.length()){
//             return false;
//         }
//         vector<int> count(26,0);
//         for(int i =0;i<s.length();i++){
//             count[s[i]-'a']++;
//             count[t[i]-'a']--;
//         }
//         for(int c : count){
//             if(c!=0){
//                 return false;
//             }
//         }
//         return true;
//     }