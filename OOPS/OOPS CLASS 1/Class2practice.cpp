#include <iostream>
using namespace std;

class practice
{
public:
    int x;
    int *y;
    int z;

    practice()
    {
        cout << "Default Constructor" << endl;
    }
    practice(int _x, int _y, int _z)
    {
        cout << "Parameterized Constructor" << endl;
        x = _x;
        y = new int(_y);
        z = _z;
    }
    

    ~practice()
    {
        cout << "Destructor  Called" << endl;
        delete y;
    }
};

main()
{
    practice obj1(1, 2, 4);
    cout << obj1.x << endl;
    cout << *obj1.y << endl;
    {
        cout << obj1.z << endl;
    }

    return 0;
}