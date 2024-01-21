#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> nums = {1, 3, 5, 3, 4};
   int sum=0;
        int n=nums.size();
        for(int index=0;index<n;index++)
         {
             sum=sum+nums[index];
         }      
         int totalsum=((n)*(n+1))/2;
         int ans=totalsum-sum;
         cout<<ans;

    return 0;
}
