#include<iostream>
using namespace std;
int main(){
    int a, round, x, y, output;
    while(cin >> a){
        int *d = new int[a];
        for(int i = 0;i < a;i++){
            cin >> d[i];
        }
        cin >> round;
        while(round > 0){
            cin >> x >> y;
            output = d[x] + d[y];
            cout << output << endl;
            round--;
        }
        delete d;
    }
}
