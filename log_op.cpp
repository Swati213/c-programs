#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n % 2 == 0 && n % 3 == 0)
    {
        cout << "divisible by 2 & 3" << endl;
    }
    else if (n % 2 == 0 || n % 3 == 0)
    {
        cout << "divisible by 2 or 3" << endl;
    }
    else
    {
        cout << "not divisible by 2 or 3" << endl;
    }
    return 0;
}