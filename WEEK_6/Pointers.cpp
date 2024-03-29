#include <iostream>
using namespace std;
int main()
{
    int n = 50;
    cout << "Value of n is : " << n << endl;

    cout << "Address of  n is : " << &n << endl;

    int *ptr = &n;
    cout << "Pointer " << *ptr<<endl;

    // Size of pointers
    cout<<sizeof(*ptr)<<endl;

    char ch='k';
    char* cptr=&ch;
    cout<<"Size of Ch: "<<sizeof(cptr)<<endl;

    long jeel=20;
    long* jptr=&jeel;
    cout<<"Size of Jeel: "<<sizeof(jptr)<<endl;



    int a=100;
    int* aptr=&a;
    cout<<a<<endl;
    cout<<&a<<endl;
    cout<<*aptr<<endl;
    cout<<aptr<<endl;
    cout<<&aptr<<endl;
    cout<<*aptr++<<endl;
    cout<<++*aptr<<endl;
    cout<<*aptr-2<<endl;


    return 0;
}