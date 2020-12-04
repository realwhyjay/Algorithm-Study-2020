#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    // 추의 갯수는 1~1000 만큼 받을 수 있다고 했으니 1000 만큼의 배열을 선언함.
    int choo[1000];
    // 무게가 1인 추가 없다면 답이 1이어야하기 때문에 result값에 1을 넣어준다.
    int result = 1, sum;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> choo[i];
    }

    // 오름차순으로 추를 정렬한다.
    sort(choo, choo + n);

    // 첫번째 추의 크가기 1일경우
    if (choo[0] == 1)
    {
        sum = choo[0];
        // 추가 n개보다 적을 동안 for문을 진행하고
        // 이와 동시에, 현재까지의 추의 합이 다음 추의 값 -1 보다 큰 경우에만 반복을 진해한다.
        // 이는 현재까지의 추의 합 + 1이 다음 추의 크기보다 같거나 큰 경우에는 첫번째 추부터 다음 추 사이의 모든 수를 만들 수 있기 대문이다.
        for (int i = 1; i < n && sum >= choo[i] - 1; i++)
        {
            sum += choo[i];
        }
        result = sum + 1;
    }
    cout << result;
    return 0;
}
