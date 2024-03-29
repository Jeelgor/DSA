#include <iostream>
using namespace std;

string CompressString(string &str)
{
    string compress;
    int count = 1;
    for (int i = 1; i < str.length(); i++)
    {
        if (i < str.length() && str[i] == str[i - 1])
        {
            count++;
        }
        else
        {
            compress += to_string(count) + str[i - 1];
            count = 1;
        }
    }
    return compress;
}

int main()
{
    string input = "aaaabbbccdef";
    string compressed = CompressString(input);
    cout << compressed << endl;
    return 0;
}