#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;
int main() {
    int N;
    priority_queue<int> queue;
    scanf("%d", &N);

    while(N--){
        int M;
        scanf("%d", &M);

        if (M==0){
            if(queue.empty()){
                printf("0\n");
            }
            else {
                printf("%d \n",queue.top());
                queue.pop();
            }
        }
        else {
            queue.push(M);
        }

    }
}