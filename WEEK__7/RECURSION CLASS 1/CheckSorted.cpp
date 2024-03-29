#include <iostream>
using namespace std;
bool CheckSorted(int arr[], int size, int index)
{
    // base case
    if (index >= size)
    {
        return true;
    }
    // processing
    if (arr[index] > arr[index - 1])
    {
        bool agekaAns = CheckSorted(arr, size, index + 1);
        return  agekaAns;
    }
    else {
        return false;
    }
}
int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60};
    int size = 6;
    int index = 1;

    bool isSorted = CheckSorted(arr, size, index);
    if (isSorted)
    {
        cout << "Array is Sorted" << endl;
    }
    else
    {
        cout << "Array is not Sorted";
    }
    return 0;
}