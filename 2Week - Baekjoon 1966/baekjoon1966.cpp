#include <iostream>
#include <queue>
using namespace std;

int main()
{

    int testcase, N, M, importance, turn;
    cin >> testcase;

    for (int x; x < testcase; x++)
    {
        cin >> N >> M;
        queue<pair<int, int>> document;
        priority_queue<int> priority;

        turn = 0;

        for (int i = 0; i < N; i++)
        {
            cin >> importance;
            document.push(make_pair(i, importance));
            priority.push(importance);
        }

        while (!document.empty())
        {
            int documentNum = document.front().first;
            int documentPriority = document.front().second;

            if (priority.top() > documentPriority)
            {
                document.push(document.front());
                document.pop();
            }

            else
            {
                document.pop();
                priority.pop();
                turn++;

                if (documentNum == M)
                {
                    cout << turn << endl;
                    break;
                }
            }
        }
    }
}