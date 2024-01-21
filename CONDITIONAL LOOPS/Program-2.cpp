#include<iostream>
using namespace std;
int main(){
    int side=4;
    if( side==3)
    {

        cout<<"triangle"<<endl;

    }
    else if (side==4)
    {
        cout<<"Rectangle"<<endl;

    }
    else if (side==5)
    {
        cout<<"Pantagonal"<<endl;

    }
    
    else
    {

        cout<< "not a triangle";

    }
}