#include <iostream>
using namespace std;

int minNumber(int arr[], int size, int index)
{
    if (index >= size)
    {
        return 0;
    }
    int minimumNumber = arr[index];
    int ans = minNumber(arr, size, index + 1);
    if (arr[index] < minimumNumber)
    {
        minimumNumber = arr[index];
    }
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int size = 5;
    int index = 0;
    cout << "Min Number is : " << minNumber(arr, size, index);

    return 0;
}