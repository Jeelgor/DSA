#include<iostream>
#include<vector>
using namespace std;

void print(vector<int> v)
{
    int size=v.size();
    for(int i=0;i<size;i++)
    {
        cout<<v[i]<<endl;
    }
    cout<<size;
}
int main()
{
    vector<int> v;

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    print(v);
   

}