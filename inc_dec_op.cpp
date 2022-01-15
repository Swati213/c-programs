#include <iostream>
using namespace std;

int main()
{
    int i=1;
    int j=2;
    int k,l;
    // l =i++ + ++i;
    // cout<<l<<endl;

    k=i +j + i++ + j++ + ++i + ++j;
    cout<<k<<endl;
    return 0;
}