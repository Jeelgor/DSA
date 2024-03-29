#include <iostream>
#include <cstring>
using namespace std;

bool pelindrom(char ch[])
{
    int size = sizeof(ch) / sizeof(ch[0]);
    int j = size - 1;
    for (int i = 0; i >= j; i++)
    {

        if (ch[i] == ch[j])
        {
            i++;
            j--;
        }
        else
        {
            return false;
        }
    }
    return true;
}

int main()
{
    char ch[] = {"BOB"};
    bool ans = pelindrom(ch);

    if (ans)
    {
        cout << "Pelindrom he" << endl;
    }
    else
    {
        cout << "nathi loda";
    }
    return 0;
}