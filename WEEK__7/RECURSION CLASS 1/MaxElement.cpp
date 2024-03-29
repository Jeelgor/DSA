#include <iostream>
#include <climits> // for INT_MIN
using namespace std;

void MaximumNum(int arr[], int size, int index, int &maxi)
{
    if (index >= size)
    {
        return;
    }
    maxi = max(maxi, arr[index]);
    MaximumNum(arr, size, index + 1, maxi);
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int size = 5;
    int index = 0;
    int maxi = INT_MIN; // Initialize with minimum possible value
    MaximumNum(arr, size, index, maxi);

    // Output the maximum number found
    cout << "Maximum number is: " << maxi << endl;

    return 0;
}
