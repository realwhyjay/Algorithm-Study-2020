#include <iostream>
#include <queue>
using namespace std;

int N,M,V,X,Y;
int graph[1001][1001];
int dfsVisited[1001];
int bfsVisited[1001];
int hi=0;

void dfs(int v) {
    cout << v << ' ';
    dfsVisited[v] = 1;
    for(int i=1; i<=N; i++){
        if(graph[v][i]==1 && bfsVisited[i]==0){
            continue;
        }
        dfs(i);
    }
}

void bfs(int v) {
    queue<int> bfsQueue;
    bfsQueue.push(v);
    bfsVisited[v] = 1;
    int hey = bfsQueue.empty();
    while(!bfsQueue.empty()){
        v = bfsQueue.front();
        cout << v << ' ';
        bfsQueue.pop();

        for(int i=0; i<=N; i++) {
            if(graph[v][i]==1 && bfsVisited[i]==0){
                bfsQueue.push(i);
                bfsVisited[i] = 1;
            }
        }
    }
}

int main()
{
   cin >> N >> M >> V;
   for(int i=0; i<M; i++){
       cin >> X >> Y;
       graph[X][Y] = graph[Y][X] =1;
   }
   dfs(V);
   cout << endl;
   bfs(V);
}
