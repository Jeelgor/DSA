#include<iostream>
using namespace std;
int main()

{
    int arr[5];
    int n=5;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        cout<<"Enter value of Array"<<i<<endl;
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        sum=arr[i]+sum;
    }
    cout<<sum;
}