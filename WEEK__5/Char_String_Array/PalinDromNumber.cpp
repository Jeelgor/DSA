#include <iostream>
#include <string.h>
using namespace std;
bool pelimDrom(char ch[], int n)
{
    int i = 0;
    int j = n - 1;
    while (i <= j)
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
    char ch[100];
    int len = strlen(ch);
    cin.getline(ch,100);
    bool ispelimdrom = pelimDrom(ch, len);
    if (ispelimdrom)
    {
        cout << "isPelimDrom he" << endl;
    }
    else
    {
        cout << "Nahi he " << endl;
    }
    return 0;
}