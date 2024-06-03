#include <iostream>
using namespace std;

class Person
{
public:
    void walk()
    {
        cout << "Walking";
    }
};
class teacher : virtual public Person
{
public:
    void teaching()
    {
        cout << "Teaching";
    }
};
class Reseacher : virtual public Person
{
public:
    void Research()
    {
        cout << "DO research...";
    }
};
class Proffesor : virtual public teacher, Reseacher
{
public:
    void boaring()
    {
        cout << "bore";
    }
};

int main()
{
    Proffesor p;
    p.boaring();
    p.walk();

    return 0;
}