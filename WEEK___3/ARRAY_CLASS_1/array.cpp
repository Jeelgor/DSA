#include<iostream>
using namespace std;
int main()
{
    // int arr[90];
    // cout<<"Array Created SuccessFully";
    int arr[5];
        int n=5;
        for(int i=0;i<=n;i++)
        {
            cout<<"Enter value of Array"<<i<<endl;
            cin>>arr[i];
            cout<<endl;
        }
        cout<<"Printing an Array"<<endl;

        for(int i=0;i<=n;i++)
        {
            cout<<arr[i]<<" ";
        }

}