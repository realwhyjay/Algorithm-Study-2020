#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    int a;
    int check = 0;

    cin >> a;
    char PS[50];

    for (int i = 0; i < a; i++)
    {
        cin >> PS;
        int PSLen = strlen(PS);
        for (int a = 0; a < PSLen; a++)
        {
            if (PS[a] == '(')
            {
                check++;
            }
            if (PS[a] == ')' && check <= 0)
            {
                check--;
                break;
            }
            else if (PS[a] == ')')
            {
                check--;
            }
        }

        if (check == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
        check = 0;
    }
    return 0;
}

/* 
문제 1 : 컴파일 오류
C++에서 strlen() 을 사용하려면 <string.h>를 include해줘야함

문제2 : 틀린 이유1

*/
