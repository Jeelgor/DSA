#include<iostream>
using namespace std;
int FindOccurence(int arr[],int n,int target)
{
    int FirstOcc=FindOccurence(arr,n,target);
    int LastOcc=FindOccurence(arr,n,target);
    int TotalOc = LastOcc - FirstOcc + 1;
    return TotalOc;
}

int main()
{
    int arr[]={10,20,30,30,40,30,30,50,60};
    int n=9;
    int target=30;
    int ans=FindOccurence(arr,n,target);
    cout<<"Total Occurence is : "<<ans<<endl;
}

