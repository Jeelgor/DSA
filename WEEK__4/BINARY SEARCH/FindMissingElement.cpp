#include<iostream>
using namespace std;
int findMissingNumber(int arr[],int n)
{
    int s=0;
    int e=n-1;
    int mid=(s+e)/2;
    int ans=-1;
    while (s<=e)
    {
        int diff=arr[mid]-mid;
        if(diff==1)
        {
            s=mid+1;
        }
        else{
            ans=mid;
            e=mid-1;
        }
        mid=(s+e)/2;

    }
    if(+1==0)
    {
        return ans+1; 
    }
    return ans+1;
    
}
int main()
{
    int arr[]={1,2,3,4,6,7,8,9};
    int n=8;
    findMissingNumber(arr,n);

    cout<<"Missing Element is :"<<findMissingNumber(arr,n);
}