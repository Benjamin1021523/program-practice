#include<iostream>
using namespace std;
int main(){
    int round, a, max;
    cin >> round;
    max = 0;
    while(round > 0){
        cin >> a;
        if(max < a){
            max = a;
        }
        round--;
    }
    cout << max << endl;
}
