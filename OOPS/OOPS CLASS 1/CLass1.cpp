#include <iostream>
using namespace std;

class Student
{

private:
    string gf;

public:
    int id;
    int age;
    string name;
    int nos;

    void Study()
    {
        cout << "Studing";
    }
    void Sleeping()
    {
        cout << "Sleeping";
    }
    void Bunking()
    {
        cout << "Bunking";
    }
    Student()
    {
        cout << "Default Constructer" << endl;
    }
    Student(int _id, int _age, string _name, string _Gf)
    {
        id = _id;
        age = _age;
        name = _name;
        gf = _Gf;
        cout << "Parameterized Constructer" << endl;
    }

private:
    void gfChatting()
    {
        cout << "gf";
    }
};

int main()
{
    cout << sizeof(Student);
    Student s1;

    Student s2(1, 12, "Choota Bheem", "Chutki");
    cout << s2.id << endl;
    cout << s2.age << endl;
    cout << s2.name << endl;
    // cout<<s2.gf<<endl;

    return 0;
}