#include <iostream>
using namespace std;

int main() {
    int a,b,c,student;
    cin >> a >> b >> c >> student;

    for(int i=0; i<=50; i++){
        int studentA = a*i;
        
        for(int j=0; j<=50; j++){
            int studentB = b*j;

            for(int q=0; q<=50; q++){
                int studentC = c*q;

                if (studentA+studentB+studentC == student){
                    cout << 1 << endl;
                    return 0;
                }
            }
        }
    }
   cout << 0 << endl;
}