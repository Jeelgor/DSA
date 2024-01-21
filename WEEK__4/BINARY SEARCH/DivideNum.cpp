#include<iostream>
using namespace std;
int GetQuetiont(int Division,int Divindend)
{
    int s=0;
    int e=Divindend;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e)
    {
        if(mid*Division==Divindend)
        {
            return mid;
        }
        else if(mid*Division < Divindend)
        {
            ans=mid;
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}
int main()
{
    int Division = 7;
    int Divindend = 29;
    int ans= GetQuetiont(Division,Divindend);
    cout<<"Final Ans Is : "<< ans;
}