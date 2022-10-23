#include <iostream>
using namespace std;
int main()
{
    float a, b;
    unsigned int r;
    cin >> a >> b;
    r = 1 / (1 / a + 1 / b);
    cout << r << endl;

    return 0;
}