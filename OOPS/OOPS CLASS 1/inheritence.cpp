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
        cout << "Eating";
    }
    void fly()
    {
        cout << "flying";
    }
};
class Sparrow : public Bird
{
public:
    Sparrow(int age, int weight, string color, int nol)
    {
        this->age = age;
        this->weight = weight;
        this->color = color;
        this->nol = nol;
    }
    void grassing()
    {
        cout << "Grassing";
    }
};
class Pegion : public Bird
{
public:
    void Guttring()
    {
        cout << "Guttring";
    }
};
int main()
{
    Sparrow s(3, 1, "Brown", 2);
    cout<<s.age;
    Pegion p;
    // p.
    return 0;
}