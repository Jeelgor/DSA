#include <iostream>
using namespace std;

class abc
{
public:
    static int x, y;

    // Constructor to initialize x and y
    abc(int _x, int _y) {
        x = _x;
        y = _y;
    }
    // abc(int _x, int _y) : x(_x), y(_y) {}
    static void print()
    {
        cout << x << " " << y << "" << endl;
    }
};

int abc::x;
int abc::y;

int main()
{
    // Create obj1 with initialization
    abc obj1(1, 2);
    // Call print function to display x and y
    obj1.print();
    abc obj2(10, 20);
    obj1.print();
    obj2.print();

    return 0;
}
