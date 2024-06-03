#include <iostream>
using namespace std;

void reverseArray(string &ch, int l, int r)
{
    while (l < r)
    {
        swap(ch[l], ch[r]);
        l++;
        r--;
    }
}

int main()
{
    string ch = "jeelgor";
    int l = 0;
    int r = ch.size() - 1; // Use size() function to get the length of the string
    reverseArray(ch, l, r);

    for (int i = 0; i <= r; i++)
    {
        cout << ch[i] << " ";
    }

    return 0;
}
