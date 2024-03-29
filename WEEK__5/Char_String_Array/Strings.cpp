#include <iostream>
using namespace std;
int main()
{
    // string name;
    // // cin>>name;
    // cout<<"Name is:: "<<name<<endl;
    // cout<<name[0]<<endl;
    // // in string if we want to take input after space we need to use thi get line
    //  getline(cin,name);
    // int i=0;
    // while(name[i]!='\0'){
    //     cout<<"Index is: "<<"  "<<i<<" "<<"Name is "<<name[i]<<endl;
    //     i++;
    // }


    // remove function in string
    // string des="Hello jeel How are you";
    // des.erase(5,4);
    // cout<<des<<endl;
        
    // // insert 
    // string name="Jeel";
    // string middle="Kumar";
    // name.insert(4,middle);
    // cout<<name<<endl;


    // string name1="Jeel";
    // cout<<name1<<endl;

    // name1.push_back('G');
    // cout<<name1<<endl;

    // name1.pop_back();
    // cout<<name1<<endl;

    string str="abbcbaddcbabbbacc";
    string tar="cba";
    if(tar.find(str)==string::npos){
        cout<<"found"<<endl;
    }
    else{
        cout<<"Not Found ";
    }

    
    return 0;
}