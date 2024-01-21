#include<iostream>
using namespace std;
int  MinimumNumber(int arr[],int size){
    int minAns=INT_MAX;
    for(int i=0;i<size;i++)
    { 
         if(arr[i]<minAns)
         {
            minAns=arr[i];
         }
    }
    return minAns;


}
int main()
{
    int arr[6]={2,31,55,1,44,62};
    int size=6;

    int answer=MinimumNumber(arr,size);
    cout<<"Minimum  Number is"<<answer;


}