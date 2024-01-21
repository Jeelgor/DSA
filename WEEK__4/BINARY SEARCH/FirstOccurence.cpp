#include<iostream>
using namespace std;
int FirstOccurence(int arr[],int n,int target)
{
    int s=0;
    int e=n-1;
    int ans=-1;
    // int mid=(s+e)/2; // it can be Overflow  due to limit of integer
//    BEST PRACTICE
    int mid= s + (e-s)/2;

    while (s<=e)
    {
        if(arr[mid] == target )
        {
            ans=mid;
            e=mid-1;
        }
        if(target > arr[mid])
        {
            s=mid+1;
        }
        if(target < arr[mid])
        {
            e=mid-1;
        }
        mid=(s+e)/2;
    }
    return ans;


}
int main()
{
    int arr[]={10,20,30,30,30,30,50,60,70};
    int n=9;
    int target=30;
  int ansIndex = FirstOccurence(arr,n,target);

  if(ansIndex==-1)
  {
    cout<< "Tatget not Found" <<endl;
  }

  else{
    cout<< "Target Found at Index :: " << ansIndex << endl;
  }
}