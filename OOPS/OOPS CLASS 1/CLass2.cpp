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
    int *v;

public:
    Student(int _id, int _age, string _name, int _nos, string _gf)
    {
        cout << " Constructor Called" << endl;

        id = _id;
        age = _age;
        name = _name;
        nos = _nos;
        gf = _gf;
        this->v = new int(10);
    }
    Student(const Student &srcobj)
    {
        cout << "Copy Constructor Called" << endl;

        this->age = srcobj.age;
        this->id = srcobj.id;
        this->name = srcobj.name;
        this->nos = srcobj.nos;
    }
    string  getgfname()
    {
        return gf;
    }
    ~Student()
    {
        cout << "destructor Called" << endl;
        delete v;
    }
};
int main()
{

    Student s1(1, 12, "Jeel", 3, "Chutki");
    Student s2 = s1;
    cout << s1.name << endl;
    cout << s2.name << endl;
    cout << s1.getgfname()<<endl;
    return 0;
}