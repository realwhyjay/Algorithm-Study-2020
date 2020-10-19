#include <iostream>
using namespace std;

int main()
{
    int dwarf[9];
    int sum = 0;
    bool end = false;

    for (int i = 0; i < 9; i++)
    {
        cin >> dwarf[i];
        sum += dwarf[i];
    }

    for (int i = 0; i < 8; i++)
    {
        for (int q = i + 1; q < 9; q++)
        {
            if (sum - (dwarf[i] + dwarf[q]) == 100)
            {
                dwarf[i] = 0;
                dwarf[q] = 0;

                end = true;
                break;
            }
        }

        if (end)
        {
            break;
        }
    }

    for (int i = 0; i < 8; i++)
    {
        for (int j = i + 1; j < 9; j++)
        {
            if (dwarf[i] > dwarf[j])
            {
                int temp = dwarf[j];
                dwarf[j] = dwarf[i];
                dwarf[i] = temp;
            }
        }
    }

    cout << endl;

    for (int i = 0; i < 9; i++)
    {
        if (dwarf[i] != 0)
        {
            cout << dwarf[i] << endl;
        }
    }
}