#include<iostream>
using namespace std;
int main()
{
    int price[]={7,5,3,6,4,1};
    int size = 6;
    int min=INT32_MAX;
    
    int minIndex=-1;
    for(int i=0;i<size;i++)
    {
        if(price[i]<min)
        {
            min=price[i];
            minIndex=i;
        }
    }
    cout<<"minimum value is : "<<min<<endl;
    cout<<"index of minimum value is : "<<minIndex<<endl;


    
     if(minIndex==size-1){
      return 0;  
    }
    else{
         int maxprofit=INT32_MIN;
    for(int j=minIndex+1;j<size;j++)
    {
        int diff = price[j]-min;
        cout<<j<<"index of diff is :"<<diff<<endl;
        
        if(diff>maxprofit){
            maxprofit=diff;

        }
     

    }
cout<<"max profit is : "<<maxprofit<<endl;
    }
 
  
    
 return 0;
}