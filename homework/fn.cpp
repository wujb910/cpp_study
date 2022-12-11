#include <iostream>
using namespace std;

int fibo(int n)
{
    if (n <= 2)
    {
        return 1;
    }
    return fibo(n - 1) + fibo(n - 2);
}

int fibo2(int n)
{
    if (n <= 2)
    {
        return 1;
    }
    int last1 = 1;
    int last2 = 1;
    int val = 0;
    for (int i = 3; i <= n; i++)
    {
        val = last1 + last2;
        last2 = last1;
        last1 = val;
    }
    return val;
}

int factorial(int n)
{
    if (n <= 1)
    {
        return 1;
    }
    int sum = 1;
    for (int i = 1; i <= n; i++)
    {
        sum *= i;
    }
    return sum;
}

int factorial2(int n)
{
    if (n <= 1)
    {
        return 1;
    }
    return factorial2(n - 1) * n;
}

int gougu[1000][3] = {};

int gougu_sum(int max)
{
    int n = 0;
    for (int i = 1; i <= max; i++)
    {
        for (int j = 1; j <= max; j++)
        {
            for (int k = 1; k <= max; k++)
            {
                if (i * i + j * j == k * k)
                {
                    gougu[n][0] = i;
                    gougu[n][1] = j;
                    gougu[n][2] = k;
                    n++;
                }
            }
        }
    }
    return n;
}

int main()
{
    // int m = fibo2(10);
    // cout << m << endl;
    // int m = factorial(5);
    // int n = factorial2(5);
    // cout << m << endl
    //      << n << endl;
    int n = gougu_sum(100);
    for (int i = 0; i < n; i++)
    {
        cout << gougu[i][0] << "," << gougu[i][1] << "," << gougu[i][2] << "," << endl;
    }
}
