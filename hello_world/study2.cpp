#include <iostream>
using namespace std;
int main()
{
    char x = 'f';
    if (x < 91 && x >= 65)
    {
        uint y = x + 26 + 6;
        cout << "true" << (char)(y) << endl;
    }
    else if (x < 123 && x >= 97)
    {
        int y = x - 26 - 6;
        cout << "true" << (char)(y) << endl;
    }
    else
    {
        cout << "false" << endl;
    }
    // char a = 97;
    // char b = 1;

    // int x = 4;
    // // cin >> x;
    // if (x % 4 == 0)
    // {
    //     char y = x;
    //     cout << "true" <<(char)( a + b) << endl;
    // }
    // else
    // {
    //     cout << "false" << endl;
    // }

    return 0;
}