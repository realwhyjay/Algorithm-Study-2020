#include <iostream>
#include <algorithm>
using namespace std;

int arr[100001];

void binarysearch(int n, int temp)
{
    int start = 0;
    int end = n - 1;
    int mid;

    while (end - start >= 0)
    {
        mid = (start + end) / 2;
        if (arr[mid] == temp)
        {
            printf("1\n");
            return;
        }
        else if (arr[mid] > temp)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    printf("0\n");

    return;
}

int main()
{
    int N, M, temp;
    scanf("%d", &N);
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }
    sort(arr, arr + N);

    scanf("%d", &M);
    for (int i = 0; i < M; i++)
    {
        scanf("%d", &temp);
        binarysearch(N, temp);
    }
}
