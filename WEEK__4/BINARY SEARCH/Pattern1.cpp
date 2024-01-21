#include<iostream>
using namespace std;
int main()
{
    int num=10;
    for(int row=1;row<=num;row++)
    {
        for(int col=1;col<=row;col++)
        {
            cout<<num<<" ";
            num=num-1;

        }
        cout<<endl;
    }
}