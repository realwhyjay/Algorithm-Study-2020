#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int N, M;
    vector<string> nohear;
    vector<string> nohearnosee;
    string nosee;

    cin >> N >> M;

    // 미리 메모리를 할당하여주는 것! 왜인지 모르겠는데 resize 안해주니까 실행이 제대로 안됨 ㅠ
    nohear.resize(N);

    for (int i = 0; i < N; i++)
    {
        cin >> nohear[i];
    }

    // 밑에서 이진탐색을 사용해주어여하기 떄문에 오름차순 정렬을 해준다.
    sort(nohear.begin(), nohear.end());

    for (int j = 0; j < M; j++)
    {
        cin >> nosee;

        // 이중탐색 함수를 사용해서, nosee가 nohear 벡터의 원소중에 중복되는 값이 있다면 nohearnosee에 push_back해준다.
        if (binary_search(nohear.begin(), nohear.end(), nosee))
        {
            nohearnosee.push_back(nosee);
        }
    }

    sort(nohearnosee.begin(), nohearnosee.end());
    cout << nohearnosee.size() << endl;

    for (int i = 0; i < nohearnosee.size(); i++)
    {
        cout << nohearnosee[i] << endl;
    }
}
