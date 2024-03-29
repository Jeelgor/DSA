#include <iostream>
#include <vector>
using namespace std;

void Solve(int arr[], int size, int index, vector<int> &ans)
{
    if (index >= size)
    {
        cout << "Index overflow" << endl;
        return;
    }

    if (arr[index] % 2 == 0)
    {
        ans.push_back(arr[index]);
    }

    Solve(arr, size, index + 1, ans);
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50, 33};
    int index = 0;
    int size = 5;
    vector<int> ans;

    Solve(arr, size, index, ans);

    cout << "Even elements in the array: ";
    for (int num : ans)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
