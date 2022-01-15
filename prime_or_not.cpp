#include <iostream>
using namespace std;
int main()
{
    int no;
    cin >> no;
    int i;
    for ( i = 2; i < no; i++)
    {
        if (no % i == 0)
        {
            cout << "not prime" << endl;
            break;
        }
    }
    if(no==i){
    cout << "prime" << endl;
    }
    return 0;
}
