#include <iostream>
using namespace std;

void BubberSort(int arr[], int size)
{
    // Base case: If the array size is 1 or less, it's already sorted
    if (size <= 1)
        return;

    // One pass of bubble sort
    for (int i = 0; i < size - 1; ++i)
    {
        if (arr[i] > arr[i + 1])
        {
            // Swap if elements are in the wrong order
            swap(arr[i], arr[i + 1]);
        }
    }

    // Recursively call bubble sort for the remaining elements
    BubberSort(arr, size - 1);
}

int main()
{
    int arr[] = {5, 4, 3, 2, 1};
    int size = sizeof(arr) / sizeof(arr[0]);

    // Call bubble sort
    BubberSort(arr, size);

    // Print the sorted array
    for (int i = 0; i < size; ++i)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
