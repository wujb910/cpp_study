#include <iostream>
using namespace std;
int main()
{
    double score[10] = {100, 57, 93, 78, 84};
    float total = 0;
    int score_length = 0;
    for (int i = 0; i < 10; i++)
    {
        if (score[i] == 0)
        {
            break;
        }
        total += score[i];
        score_length++;
    }
    float avg = total / score_length;
    cout << total << endl
         << avg << endl;
}