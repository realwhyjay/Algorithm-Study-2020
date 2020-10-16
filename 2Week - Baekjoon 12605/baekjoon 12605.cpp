#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    int caseNum;
    int printCaseNum = 1;
    int row, column;
    int word;

    cin >> caseNum;
    getchar();

    for (int i = 0; i <= caseNum; i++)
    {
        row = 0, column = 0;
        char arr[26][26] = {
            0,
        };

        while ((word = getchar()) != '\n' && (word != EOF))
        {
            if (word == ' ')
            {
                row++;
                column = 0;
            }
            else
            {
                arr[row][column] = word;
                column++;
            }
        }

        for (int i = row; i >= 0; i--)
        {
            for (int a = 0; a < strlen(arr[i]); a++)
            {
                if (i == row && a == 0)
                {
                    cout << "Case #" << printCaseNum << ": ";
                    printCaseNum++;
                }

                cout << arr[i][a];
            }

            if (i != 0)
            {
                cout << " ";
            }
        }
        cout << "\n";
    }
    return 0;
}
