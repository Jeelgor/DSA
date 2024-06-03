#include <iostream>
using namespace std;

int main()
{
    int n = 4;
    int k = 10;

    for (int i = 0; i < n; i++)
    {
        int num = k - i;
        for (int j = 0; j <= i; j++)
        {
            cout << num-- << " ";
        }
        cout << endl;
    }
    return 0;
}
