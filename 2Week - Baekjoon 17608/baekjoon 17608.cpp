#include <iostream>
using namespace std;

int main()
{
    int num, arr[100000], i, max = 0, count = 0;

    cin >> num;

    for (i = 0; i < num; i++)
    {
        cin >> arr[i];
    }

    for (i = num - 1; i >= 0; i--)
    {
        if (max < arr[i])
        {
            max = arr[i];
            count++;
        }
    }

    cout << count;
}