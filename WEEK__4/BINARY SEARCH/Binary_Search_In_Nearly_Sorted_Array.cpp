#include <iostream>
using namespace std;
int NearlySortedArray(int arr[] , int n , int target)
{
    int Start=0;
    int End=n-1;
    int mid=Start+(End-Start)/2;
    while(Start <= End)
    {
        if(arr[mid-1]==target)
        {
            return mid-1;
        }
        if(arr[mid]==target)
        {
             return mid;
        }
        if(arr[mid+1]==target)
        {
              return mid+1;
        }
        if(target > arr[mid])
        {
            Start=mid+2;
        }
        else{
            End=mid-2;
        }
        mid=Start+(Start-End)/2;
    }
}
int main()
{
    int arr[] = {20, 10, 30, 50, 40, 70, 60};
    int n=7;
    int target=70;

   int targetvalue= NearlySortedArray(arr,n,target);

   if(targetvalue==-1)
   {
    cout<<"Element not Found"<<endl;
   }
   else{
    cout<<"Element Found : "<<targetvalue<<endl;
   }
    return 0;
}