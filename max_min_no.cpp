#include <iostream>
using namespace std;
int main()
{
    int no1, no2;
    cin >> no1 >> no2;
    int max, min;
    if (no1 > no2)
    {
        max = no1;
        min = no2;
    }
    else
    {
        max = no2;
        min = no1;
    }
    cout << "max" << max << endl;
    cout << " min" << min << endl;

    return 0;
}