#include<iostream>
using namespace std;
int main(){
    int round, a, b;
    cin >> round;
    int count = 0;
    while(round > 0){
        count++;
        cin >> a >> b;
        if(a % 2 == 0){
            a++;
        }
        if(b % 2 == 0){
            b--;
        }
        cout << "Case " << count << ": " << (a + b) * ((b - a) / 2 + 1) / 2 << endl;
        round--;
    }
}
