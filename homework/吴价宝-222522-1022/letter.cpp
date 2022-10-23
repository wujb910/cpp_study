#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    char list[n];
    for (int i = 0; i < n; i++)
    {
        cin >> list[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << (char)(list[i] - 32) << " ";
    }
    cout << endl;
    return 0;
}