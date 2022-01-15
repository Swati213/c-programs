#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    do
    {
        cout << n << " "
             << "no is positive";
        cin >> n;
    } while (n > 0);

    cout << n << " "
         << "no is negative";

    return 0;
}