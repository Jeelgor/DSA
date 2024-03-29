#include <iostream>
using namespace std;
bool linerSearch(int arr[], int size, int target)
{
  for (int i = 0; i < size; i++)
  {
    if (arr[i] == target)
    {
      return true;
    }
  }
  return false;
}
int main()
{
  int arr[5] = {2, 4, 6, 8, 10};
  int target = 8;
  int size = 5;
  bool ans = linerSearch(arr, size, target);
  if (ans)
  {
    cout << "Found";
  }
  else
  {
    cout << "Not Found";
  }
  // int arr[5]={2,4,6,8,10};
  // int target=11;
  // int n=5;
  // bool flag=0;
  // for(int i=0;i<n;i++)
  // {
  //     if(arr[i]==target)
  //     {
  //         flag=1;
  //         break;
  //     }
  // }
  // if(flag==1){
  //     cout<<"Target Found";
  // }
  // else{
  //     cout<<"Target not found";
  // }
}