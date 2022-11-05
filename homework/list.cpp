#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int zhiyin[n];
    int max_num = 0;
    int min_num = 9999;
    int sum_num = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> zhiyin[i];
    }
    for (int j = 0; j < n; j++)
    {
        if (zhiyin[j] > max_num)
        {
            max_num = zhiyin[j];
        }

        if (zhiyin[j] < min_num)
        {
            min_num = zhiyin[j];
        }

        sum_num += zhiyin[j];
    }

    double avg_num = sum_num / n;
    cout << max_num << endl
         << min_num << endl
         << avg_num << endl;
}