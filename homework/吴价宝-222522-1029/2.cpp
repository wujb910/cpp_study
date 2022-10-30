#include <iostream>
using namespace std;
int main()
{
    int n, s, e;
    cin >> n;
    s = e = n;
    n = 2 * n - 1;
    int flag = 0; // flag==0时表示我们正在绘制棱形的上半部分，flag==1表示下半部分。
    for (int i = 1; i <= n; i++)
    {
        int s2 = s; //记录当前需要绘制“*”的列号
        for (int j = 1; j <= n; j++)
        {

            if (j == s2)
            {
                cout << "*";
                if (s2 + 2 <= e) //要保证绘制“*”的列不能大于e
                {
                    s2 += 2;
                }
            }
            else
            {
                cout << " ";
            }
        }

        if (s <= 1)
        {
            flag = 1;
        }

        if (flag == 0)
        {
            s -= 1;
            e += 1;
        }
        else
        {
            s += 1;
            e -= 1;
        }

        cout << endl;
    }

    return 0;
}