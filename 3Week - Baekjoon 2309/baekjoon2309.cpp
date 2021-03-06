#include <iostream>
using namespace std;

int main()
{
    int dwarf[9];
    int sum = 0;
    bool end = false;

    for (int i = 0; i < 9; i++)
    {
        cin >> dwarf[i];
        sum += dwarf[i];
    }

    // 여기서 틀렸음  첫번째 for문을 0부터 8, 두번째 for 문도 0부터 8까지 해놓고 비교했음.
    // 그 경우에는 배열의 같은 원소를 비교하기 때문에 오류가 난다.
    //
    for (int i = 0; i < 8; i++)
    {
        for (int q = i + 1; q < 9; q++)
        {
            if (sum - (dwarf[i] + dwarf[q]) == 100)
            {
                dwarf[i] = 0;
                dwarf[q] = 0;
                
                // 해당하는 경우 하나만 찾으면 난쟁이 찾기를 멈춰도 된다. 그렇기에 완전히 끝내기위해 end 값을 준다.
                end = true;
                break;
            }
        }

        // 위의 end값을 보고 첫번째 for문이 더이상 돌아갈 필요가 없음을 확인한다면 for문을 멈춘다.
        if (end)
        {
            break;
        }
    }

    for (int i = 0; i < 8; i++)
    {
        for (int j = i + 1; j < 9; j++)
        {
            if (dwarf[i] > dwarf[j])
            {
                int temp = dwarf[j];
                dwarf[j] = dwarf[i];
                dwarf[i] = temp;
            }
        }
    }

    cout << endl;

    for (int i = 0; i < 9; i++)
    {
        if (dwarf[i] != 0)
        {
            cout << dwarf[i] << endl;
        }
    }
}