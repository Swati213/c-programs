#include <iostream>
using namespace std;

int main()
{
    int no;
    cin >> no;
    if (no > 10)
    {
        cout << "more than 10" << endl;
    }
    else if (no < 10)
    {
        cout << "less than 10" << endl;
    }
    else
    {
        cout << "equal to 10" << endl;
    }
    return 0;
}