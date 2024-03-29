#include <iostream>
#include <vector>
using namespace std;
// int search(vector<int> &nums, int target)
// {
//     int l = 0, r = nums.size() - 1;
//     while (l <= r)
//     {
//         int mid = l + (r - l) / 2;
//         if (nums[mid] == target)
//             return mid;
//         else if (nums[l] >= nums[mid])
//         {
//             if (nums[l] <= target && target < nums[mid])
//                 r = mid - 1;
//             else
//                 l = mid + 1;
//         }
//         else
//         {
//             if (nums[mid] < target && target <= nums[r])
//                 l = mid + 1;
//             else
//                 r = mid - 1;
//         }
//     }
//     return -1; // No need to debug this line.
// }

// 2 exe

int mySqrt(int x)
{
    if (x == 0)
        return x;
    int first = 1, last = x / 2;
    // int mid;
    while (first <= last)
    {
        int mid = first + (last - first) / 2;
        if (mid == x / mid)
            return mid;
        else if (mid > x / mid)
        {
            last = mid - 1;
        }
        else
        {
            first = mid + 1;
        }
    }
    return last;
}
int fact(int n, int facto)
{
    for (int i = 1; i <= n; i++)
    {
        facto = facto * i;
    }
    return facto;
}

bool checkpelindrome(char ch[], int n)
{
    int i = 0;
    int j = n - 1;
    while (i >= j)
    {
        if (ch[i] == ch[j])
        {
            i++;
            j--;
        }
        else{
            return false;
        }
    }
    return true;
}
int main()
{

    char ch[] = {"racecar"};
    int n = sizeof(ch) / sizeof(ch[0]);
   bool ispelindrome=checkpelindrome(ch,n);
  if(ispelindrome==1){
    cout<<"Pelindrome he";
  }
  else{
    cout<<"Pelindrome nathi";
  }
    //  int n=5;
    //  int facto=1;
    //  cout<<fact(n,facto);

    // int x = 4;
    // int result = mySqrt(x);
    // if (result != -1)
    // {
    //     cout << result << endl;
    // }
    // else
    // {
    //     cout << "Error he ";
    // }

    // int x = 212;
    // if (x == 0)
    // {
    //     cout << 0;
    // }
    // else if (x % 2 == 0)
    // {
    //     cout << "numbe is odd";
    // }else{
    //     cout<<"number is even";
    // }

    // vector<int> nums = {1, 2, 3, 4, 5, 6, 7, 8};
    // int target = 6;
    // int result = search(nums, target);
    // if(result!=-1)
    // {
    //     cout<<"element find: "<<result<<endl;
    // }
    // else{
    //     cout<<"Element not find";
    // }
    return 0;
}