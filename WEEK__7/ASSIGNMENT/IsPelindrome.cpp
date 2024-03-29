#include <iostream>
using namespace std;
bool Ispelindrome(string &str, int start, int end)
{
    if (start >= end)
    {
        return true;
    }

    return Ispelindrome(str, start + 1, end - 1);
}
int main()
{
    string str = "racecar";
    cout << Ispelindrome(str, 0, str.size() - 1) << endl;
    return 0;
}