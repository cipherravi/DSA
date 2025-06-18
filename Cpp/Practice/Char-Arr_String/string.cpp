#include <iostream>
using namespace std;

int getLength(char name[])
{
    int length = 0;
    int i = 0;
    while (name[i] != '\0')
    {
        length++;
        i++;
    }
    return length;
}

void replace(char name[])
{
    for (int i = 0; i < getLength(name); i++)
    {
        if (name[i] == ' ')
        {
            name[i] = '@';
        }
    }
}

int main()
{

    char name[100];
    // cin >> name;
    cin.getline(name, 20);

    // cout << name << endl;
    // cout << name[4];
    // cout << "Null char is" << name[4] << endl;
    // for (int i = 0; i < 50; i++)
    // {
    //     cout << name[i] << endl;
    // }
    cout << "Str length is: " << getLength(name) << endl;
    replace(name);
    cout << "After replacement :" << name << endl;

    return 0;
}