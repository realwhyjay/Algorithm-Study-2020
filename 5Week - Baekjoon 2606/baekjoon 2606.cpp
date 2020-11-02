#include <iostream>
using namespace std;
int N, M;
int X, Y;
int graph[101][101];
int dfsVisited[101];
int virusCount = 0;

void dfs(int v)
{

    dfsVisited[v] = 1;
    for (int i = 1; i <= N; i++)
    {
        if (graph[v][i] == 1 && dfsVisited[i] == 0)
        {
            virusCount++;
            dfs(i);
        }
    }
}

int main()
{
    cin >> N;
    cin >> M;

    for (int i = 0; i < M; i++)
    {
        cin >> X >> Y;
        graph[X][Y] = graph[Y][X] = 1;
    }
    dfs(1);
    cout << virusCount << endl;
}
