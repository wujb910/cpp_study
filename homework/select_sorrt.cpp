#include <iostream>
using namespace std;
int main()
{
    double score[5] = {100, 93, 78, 57, 84};
    int i, j, k, temp;
    for (i = 0; i < 4; i++)
    {
        k = i;
        for (j = i + 1; j < 5; j++)
        {
            if (score[k] > score[j])
            {
                k = j;
            }
        }
        if (k != i)
        {
            temp = score[k];
            score[k] = score[i];
            score[i] = temp;
        }
    }
    cout << "result: ";
    for (i = 0; i < 5; i++)
    {
        cout << score[i] << " ";
    }
    return 0;
}