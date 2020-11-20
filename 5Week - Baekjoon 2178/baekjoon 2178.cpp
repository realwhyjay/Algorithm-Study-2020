#include <iostream>
#include <queue>
using namespace std;

int N, M;
int graph[101][101];

int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};

int bfs(int start_x, int start_y)
{
    queue<pair<int, int>> bfsQueue;
    bfsQueue.push({start_x, start_y});

    while (!bfsQueue.empty())
    {
        int x = bfsQueue.front().first;
        int y = bfsQueue.front().second;
        bfsQueue.pop();

        for (int i = 0; i < 4; i++)
        {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if (nx < 0 || nx > N || ny < 0 || ny > M)
            {
                continue;
            }
            if (graph[nx][ny] == 0)
            {
                continue;
            }

            if (graph[nx][ny] == 1)
            {
                graph[nx][ny] = graph[x][y] + 1;
                bfsQueue.push({nx, ny});
            }
        }
    }
    return graph[N - 1][M - 1];
}

int main()
{
    cin >> N >> M;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
			scanf("%1d", &graph[i][j]);
        }
    }
    cout << bfs(0, 0) << endl;
}
