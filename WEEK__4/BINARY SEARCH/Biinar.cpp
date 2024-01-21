#include<iostream>
using namespace std;
int Findbs(int arr[],int n,int target)
{
    int start=0;
    int end=n-1;
    int mid=(start+end)/2;
    while (start<=end)
    {
        if(arr[mid]==target)
        {
            return mid;
        }
        if(target>arr[mid])
        {
            start=mid+1;
        }
        if(target<arr[mid])
        {
            end=mid-1;
        }
        mid=(start+end)/2;
    }
    return -1;

}
int main()
{
    int arr[]={145,546,66,646,6,23,3435};
    int target=23;
    int n=7;
    int ans= Findbs(arr,n,target);
    if(ans==-1)
    {

        cout<<"element not found";
    }
    else{
        cout<<"Element Found"<<ans;
    }
}