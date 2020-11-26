#include <iostream>
#include <queue>
using namespace std;

int main()
{
    int N, M, count = 0;
    cin >> N;

    priority_queue<int, vector<int>, greater<int>> queue;

    for (int i = 0; i < N; i++)
    {
        cin >> M;
        queue.push(M);
    }

    while (queue.size() != 1)
    {
        int x = queue.top();
        queue.pop();
        int y = queue.top();
        queue.pop();
        count += x + y;
        queue.push(x + y);
    }

    cout << count;
}