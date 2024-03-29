#include <iostream>
using namespace std;

class abc
{
    int x;
    int *y;

public:

// New Style  Initialization List
 abc(int _x,int _y):x(_x),y(new int(_y)) {}


// Old Style of CTOR
    // abc(int _x, int _y)
    // {
    //     x = _x;
    //     y = new int(_y);
    // }
    int getX() const
    {
        return x;
    }
    void setX(int _val)
    {
        x = _val;
    }
    int getY() const
    {
        return *y;
    }
    void setY(int _val)
    {
        *y = _val;
    }
};

void Diplay(const abc &a) {
    cout<<a.getX()<<" "<<a.getY();
}

int main()
{
    abc a(1,2);
    Diplay(a);

    // const int *a=new int(2);
    // // *a=10;
    // cout<<*a<<endl;

    // int b=20;
    // a=&b;
    // cout<<*a<<endl;

    // int *const a = new int(10);
    // *a = 20;
    // cout << *a;

    // const int *const a= new int(2);
    // cout<<*a;
    return 0;
}
