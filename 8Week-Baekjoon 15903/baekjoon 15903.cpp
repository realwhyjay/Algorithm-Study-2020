#include <iostream>
#include <algorithm>

using namespace std;
int main()
{
    long arr[1001];
    int N, M;
    long temp, ans = 0;

    cin >> N >> M;
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < M; i++)
    {
        sort(arr, arr + N);

        temp = arr[0] + arr[1];
        arr[0] = temp;
        arr[1] = temp;
    }

    for (int i = 0; i < N; i++)
    {
        ans += arr[i];
    }
    cout << ans;
}