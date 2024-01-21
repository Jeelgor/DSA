#include<iostream>
using namespace std;


void PrintArray(int arr[][4],int row,int col)
{
      for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout<<" "<<arr[i][j];
        }
        cout<<endl;
    }
}
void Transporse(int arr[][4],int row,int col)
{
   
    for(int i=0;i<row;i++)
    {
        for(int j=i;j<col;j++)
        {
              swap(arr[i][j],arr[j][i]);
        }
    }

}
int main()
{
      int arr[4][4]={
         {1,2,3,4},
         {13,25,37,6},
         {9,8,63,7},
         {22,11,36,33},
      };
      int row=3;
      int col=3;
// Array 
cout<<" before transporse"<<endl;
PrintArray(arr,row,col);
cout<<"v after  after transporse"<<endl;
      Transporse(arr,row,col);
PrintArray(arr,row,col);

      

      
}