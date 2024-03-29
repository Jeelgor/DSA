#include <iostream>
using namespace std;

int Fact(int n) {
    // Base case
    if(n==1) 
    return 1;
    if(n==0)
    return 0;

    // recurisve Function Call
     int ans=n*Fact(n-1);
    // processing
    return ans;
}
int main()
{
    cout<<Fact(5)<<endl;
    return 0;
}