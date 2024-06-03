#include <iostream>
using namespace std;
int main()
{
    int number = 1;
    for (int row = 1; row < 5; row++)
    {
        for (int col = 1; col <= row; col++)
        {
            cout << number << " ";
            number++;
        }
        cout << endl;
    }
    return 0;
}