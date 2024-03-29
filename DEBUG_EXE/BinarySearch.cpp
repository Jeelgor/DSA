#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int target)
{
    int start = 0;
    int end = size - 1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (arr[mid] == target)
        {
            return mid;
        }
        else if (target > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }

    // If target is not found, return -1
    return -1;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int target = 6;
    int size = sizeof(arr) / sizeof(arr[0]);

    int result = binarySearch(arr, size, target);

    if (result != -1)
    {
        cout << "target is Found At: " << result;
    }
    else
    {
        cout << "target not Found";
    }
    return 0;
}