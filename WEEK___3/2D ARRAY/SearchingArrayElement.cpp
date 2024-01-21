#include<iostream>
using namespace std;

bool searchingelement(int arr[3][3],int row,int col,int target)
{
    
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(target==arr[i][j])
            {
                return true;
            }
            
        }
    }
        return false;
}

int main()
{
      int arr[3][3]={
         {1,2,3},
         {4,5,6},
         {7,8,9},
      };
      int target=5;
      int row=3;
      int col=3;
    //   searchingelement(arr,row,col);
      cout<<"found or not "<<searchingelement(arr,row,col,target);

}