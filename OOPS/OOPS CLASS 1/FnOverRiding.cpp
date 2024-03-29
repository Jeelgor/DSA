#include <iostream>
using namespace std;

class Animal
{
public:
    void sound()
    {
        cout << "Animal making sound" << endl;
    }
};
class Dog : public Animal
{
public:
    void bark()
    {
        cout << "Barking";
    }
};
class cat : public Animal
{
public:
    void meow()
    {
        cout << "mewowing";
    }
};
int main()
{
    // Dog dog;
    //    dog.bark();
    Dog *dog = new Dog();
    dog->bark();
    return 0;
}