#include <iostream>
using namespace std;
int main()
{
    cout << "enter the character of button" << endl;
    char button;
    cin >> button;
    switch (button)
    {
    case 'A':
        /* code */
        cout << "hello";
        break;
    case 'B':
        /* code */
        cout << "namaste";
        break;
    case 'C':
        /* code */
        cout << "salut";
        break;
    case 'D':
        /* code */
        cout << "hola";
        break;
    case 'E':
        /* code */
        cout << "ciao";
        break;

    default:
        cout << "I am still learning more";
        break;
    }
    return 0;
}