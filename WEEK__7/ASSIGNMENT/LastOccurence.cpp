#include <iostream>
using namespace std;

void LastOccurence(string str, int index, int &ans, char x)
{
    // base case
    if (index >= str.length())
    {
        return;
    }

    // processing
    if (str[index] == x)
    {
        ans = index;
    }
    LastOccurence(str, index + 1, ans, x);
}

int main()
{
    string str = "abcddedf";
    int index = 0;
    int ans = -1;
    char x = 'd';
    LastOccurence(str, index, ans, x);
    cout << ans;
    return 0;
}
