#include <iostream>
using namespace std;
class Bird
{
public:
    int age, weight;
    int nol;
    string color;
    void eat()
    {
        cout << "eating...." << endl;
    }
    void fly()
    {
        cout << "Flying...." << endl;
    }
};
class Sparrow : public Bird
{
public:
    void grassing()
    {
        cout << "Grassing...." << endl;
    }
};
class Pegion : public Bird
{
public:
    void guttering()
    {
        cout << "guttering...." << endl;
    }
};
int main()
{
    Sparrow s1;
    s1.age();

    return 0;
}
