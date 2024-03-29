#include <iostream>
using namespace std;

bool searchElementArray(int arr[], int size, int target, int index)
{
    if (index >= size)
    {
        return false;
    }
    if (arr[index] == target)
    {
        return true;
    }

    bool ans = searchElementArray(arr, size, target, index + 1);
    return ans;
}
int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int size = 5;
    int target = 40;
    int index = 0;
    cout << "target find out or not : " << searchElementArray(arr, size, target, index);

    return 0;
}