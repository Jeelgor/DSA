#include<iostream>
#include<limits.h>
using namespace std;

int MaxNum(int arr[3][3],int row,int col)
{
    int maxnum=INT_MIN;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(arr[i][j]>maxnum)
            {
                maxnum=arr[i][j];
            }
        }
    }
    return   maxnum;

}
int main()
{
    int  arr[3][3]={
        {1,2,3},
        {4,5,6},
        {7,8,9},
        };
    int row=3;
    int col=3;
    cout<<"Max Number is "<<MaxNum(arr,row,col)<<endl;

}