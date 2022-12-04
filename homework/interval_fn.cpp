#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <ctime>
using namespace std;
bool cmp(int a, int b)
{
    return a > b;
}

int main()
{
    int list[10] = {47, 11, 28, 98, 77, 68, 98, 72, 56, 11};
    int list2[10] = {47, 11, 28, 98, 77, 68, 98, 72, 56, 11};
    sort(list, list + 10, cmp);
    for (int i = 0; i < 10; i++)
    {
        cout << list[i] << endl;
    }
    srand(time(NULL));
    int r = rand();
    r = r % 100 + 1;
    cout << "rand: " << r << endl;

    // int u = unique(list2,list2+10)-list2;
    // cout << "u: " << u << endl;
    // cout << "list2: " << list2 << endl;

    // 打乱 list2 数组
    for (int i = 0; i < 20; i++)
    {
        int r1 = rand() % 10;
        int r2 = rand() % 10;
        if (r1 != r2)
        {
            int temp = list2[r2];
            list2[r2] = list2[r1];
            list2[r1] = temp;
        }
    }

    for (int i = 0; i < 10; i++)
    {
        cout << list2[i] << endl;
    }

    return 0;
}