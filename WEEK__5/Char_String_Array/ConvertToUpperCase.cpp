#include <iostream>
using namespace std;
void ConvertToUppperCase(char ch[], int n)
{
    int index = 0;
    while (ch[index] != '\0')
    {
        char currCharacter = ch[index];
        if (currCharacter >= 'a' && currCharacter <= 'z')
        {
            ch[index] = currCharacter - 'a' + 'A';
        }
        index++;
    }
}
int main()
{
    char ch[100];
    cin.getline(ch, 100);
    cout << "Before " << ch<<endl;
    ConvertToUppperCase(ch, 100);
    cout << "After " << ch;

    return 0;
}