#include<iostream>
using namespace std;
int main(){
    int round, a, b, x, y;
    cin >> round;
    while(round > 0){
        cin >> a >> b;
        if(a < b || (a + b) % 2 != 0){
            round--;
            cout << "impossible" << endl;
            continue;
        }
        x = (a + b) / 2;
        y = (a - b) / 2;
        cout << x << " " << y << endl;
        round--;
    }
}
