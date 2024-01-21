#include<iostream>
using namespace std;
void DiffNum(int arr[6],int n)
{
  int j=0;
  for(int index=0;index<n;index++)
  {
    if(arr[index]<0)
    {
        swap(arr[index],arr[j]);
        j++;
    }

  }
    

}

int main()
{

    int arr[6]={10,-7,-5,45,34,-9};
    int n=6;
    DiffNum(arr,n);
    cout<<"for printing array";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
}