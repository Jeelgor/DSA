#include <iostream>
using namespace std;
int main()
{
    string str = "abbcbaddcbabbbacc";
    string tar = "cba";
    int index = 0;
    while (index < str.length())
    {
        if (tar.find(str) == string::npos)
        {
            cout << "found" << endl;
            str.pop_back();
            string ans = str;
            cout << "Your ans is :  " << ans;
        }
        else
        {
            cout << "Not Found ";
        }
        index++;
    }

    return 0;
}