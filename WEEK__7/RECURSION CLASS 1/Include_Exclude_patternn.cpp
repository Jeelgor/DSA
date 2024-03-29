#include <iostream>
using namespace std;

void findSubsequence(string str, string output, int index)
{
    if (index >= str.length())
    {
        // ans he output me build ho chuka hee
        cout << output << endl;
        return; // Added to prevent further recursion
    }

    char ch = str[index];
    // exclude
    findSubsequence(str, output, index + 1);
    // include
    output.push_back(ch);
    findSubsequence(str, output, index + 1);
}

int main()
{
    string str = "abc";
    string output = "";
    int index = 0;
    findSubsequence(str, output, index);

    return 0;
}
