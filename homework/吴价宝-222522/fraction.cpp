#include <iostream>
using namespace std;
int main()
{
    uint n;
    cin >> n;
    if (n <= 10)
    {
        cout << n * 6 << endl;
    }
    else if (n > 10 && n <= 20)
    {
        cout << 60 + (n - 10) * 2 << endl;
    }
    else if (n > 20 && n <= 40)
    {
        cout << 80 + (n - 20) * 1 << endl;
    }
    else
    {
        cout << 100 << endl;
    }

    return 0;
}