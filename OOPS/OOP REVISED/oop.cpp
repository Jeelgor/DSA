#include <iostream>
using namespace std;

class Student
{
public:
    int id;
    int age;
    string name;
    int nos;
    Student(int _id, int _age, string _name, string _Gf)
    {
        id = _id;
        age = _age;
        name = _name;
        gf = _Gf;
        cout << "Parameterized Constructer" << endl;
    }
    Student()
    {
        cout << "Default Constructor  Student Ctor Called" << endl;
    }

private:
    string gf;
};
int main()
{
    Student s2(1, 12, "Choota Bheem", "Chutki");
    Student s3();
    cout <<s2.age;
    // cout<<s2.gf;
        // s1.name = "Jeel";
        // s1.Class = 'A';
        // s1.nom = 23;
        // s1.nos = "math";
        return 0;
}