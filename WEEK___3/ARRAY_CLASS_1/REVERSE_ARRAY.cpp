#include<iostream>
using namespace std;
int ReveserArray(int arr[],int Size)
{
    int Left=0;
    int Right=Size-1;
    while (Left<=Right)
    {
        swap(arr[Left],arr[Right]);
        Left++;
        Right--;
    }
    for(int i=0;i<Size;i++)
    {
        cout<<arr[i]<<" ";
    }
        

}
int main()
{
    int arr[6]={10,20,30,40,50,60};

    int Size=6;
    
    ReveserArray(arr,Size);
    
}