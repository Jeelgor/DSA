#include <iostream>
using namespace std;

int Double(int arr[], int size, int index)
{
    if (index >= size)
    {
        return false;
    }
    arr[index] *= 2;
    Double(arr, size, index + 1);
}
int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int size = 5;
    int index = 0;
    Double(arr, size, index);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i]<<" ";
    }
    return 0;
}