#include <iostream>
using namespace std;

int main()
{
    int C, N;
    int grade[1000];
    float sum = 0;
    float count = 0;
    float rate;

    cin >> C;
    for (int i = 0; i < C; i++)
    {
        cin >> N;
        count = sum = 0;
        for (int q = 0; q < N; q++)
        {
            cin >> grade[q];
            sum += grade[q];
        }
        for (int q = 0; q < N; q++)
        {
            if (grade[q] > sum / N)
            {
                count++;
            }
        }
        cout << fixed;
        cout.precision(3);
        cout << (count / N) * 100 << "%" << endl;
    }
}