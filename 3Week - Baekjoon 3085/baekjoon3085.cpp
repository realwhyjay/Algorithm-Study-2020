#include <iostream>
using namespace std;

int n;
// 처음에 max 라고 선언했었는데 std::max()랑 겹쳐서 계속 오류 났었음
int max_count = 0;
char candy[51][51];
char temp;
void vertical();
void horizontal();

int main()
{

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int q = 0; q < n; q++)
        {
            cin >> candy[i][q];
        }
    }

    //세로 변경
    for (int i = 0; i < n; i++)
    {
        for (int q = 0; q < n - 1; q++)
        {
            temp = candy[i][q];
            candy[i][q] = candy[i][q + 1];
            candy[i][q + 1] = temp;

            vertical();
            horizontal();

            temp = candy[i][q + 1];
            candy[i][q + 1] = candy[i][q];
            candy[i][q] = temp;
        }
    }
    //가로 변경
    for (int q = 0; q < n; q++)
    {
        for (int i = 0; i < n - 1; i++)
        {
            temp = candy[i][q];
            candy[i][q] = candy[i + 1][q];
            candy[i + 1][q] = temp;

            vertical();
            horizontal();

            temp = candy[i + 1][q];
            candy[i + 1][q] = candy[i][q];
            candy[i][q] = temp;
        }
    }

    cout << max_count << endl;
}

// vertical for문 조건과 horizontal for문 조건 제대로 확인해야함.
void vertical()
{
    for (int q = 0; q < n; q++)
    {
        int count = 1;
        for (int i = 0; i < n; i++)
        {
            if (candy[i][q] == candy[i + 1][q])
            {
                count++;
            }
            else
            {
                if (max_count < count)
                {
                    max_count = count;
                }
                count = 1;
            }
        }
    }
}

void horizontal()
{
    for (int i = 0; i < n; i++)
    {
        int count = 1;
        for (int q = 0; q < n; q++)
        {
            if (candy[i][q] == candy[i][q + 1])
            {
                count++;
            }
            else
            {
                if (max_count < count)
                {
                    max_count = count;
                }
                count = 1;
            }
        }
    }
}