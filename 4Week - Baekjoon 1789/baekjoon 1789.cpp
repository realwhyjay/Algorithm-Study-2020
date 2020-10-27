#include <iostream>
using namespace std;

int main()
{
    long S, i ,sum=0;
    int count;
    cin >> S;

    for(int i=1;;i++){
        sum += i;
        if(sum>S){
            count = i-1;
            break;
        }
    }
    
    cout << count << endl;
}
