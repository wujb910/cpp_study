#include <iostream>
using namespace std;
int main()
{
    int m;
    cin >> m;
    int c = 1;
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= c; j++)
        {
            cout << "*";
        }
        c += 2;
        cout << endl;
    }

    return 0;
}