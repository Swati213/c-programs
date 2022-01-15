#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int originaln=n;
    int arm=0;
    while(n>0)
    {
        /* code */
        int rem=n%10;
        arm=arm+rem*rem*rem;
        n=n/10;
    }
    if(arm==originaln){
        cout<<"armstrong no"<<arm<<endl;
    }else{
         cout<<"not armstrong no"<<arm<<endl;

    }
    
    return 0;
}