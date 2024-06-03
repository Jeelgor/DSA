#include <iostream>
using namespace std;
int getUnique(int arr[], int n)
{
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans = ans ^ arr[i];
    }
    return ans;
}
int main()
{
    int arr[] = {10, 20, 30, 30, 20, 40, 40, 40};
    int n = 8;
    cout << getUnique(arr, n);
    return 0;
}