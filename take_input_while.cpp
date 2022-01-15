#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    while (n > 0)
    {

        cout << n << " "
             << "no is positive";
        cin >> n;
    }
    cout << n << " "
         << "no is negative";

    return 0;
}