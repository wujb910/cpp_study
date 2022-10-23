#include <iostream>
using namespace std;
int main()
{
    int n, sum_i;
    int sum_total = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        sum_i = 1;
        for (int j = 1; j <= i; j++)
        {
            sum_i *= j;
        }
        sum_total += sum_i;
    }
    cout << sum_total << endl;

    return 0;
}