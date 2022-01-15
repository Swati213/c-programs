#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if (a > b)
    {
        if (a > c)
        {
            cout << " max no is" << a;
        }
        else
        {
            cout << " max no is" << c;
        }
    }
    else if (b > c)
    {
        cout << " max no is" << b;
    }
    else
    {
        cout << " max no is" << c;
    }

    return 0;
}