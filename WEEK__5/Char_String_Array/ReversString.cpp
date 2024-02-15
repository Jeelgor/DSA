#include <iostream>
#include <string.h>
using namespace std;

void ReveresStr(char ch[], int n)
{
    int i=0;
    int j=n-1;
    while(i<=j)
    {
        swap(ch[i],ch[j]);
        i++;
        j--;
    }
}
int main()
{
    char ch[4];
    cin >> ch;
    cout << "Before Reverse: " << ch<<endl;
    int len = strlen(ch);
    ReveresStr(ch, len);
    cout << "Reverse String is:  " << ch<<endl;
    return 0;
}