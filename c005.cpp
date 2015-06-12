#include<iostream>
using namespace std;
int main(){
    int round, count;
    long long int total, a, b, c;
    cin >> round;
    while(round > 0){
        cin >> count;
        total = 0;
        for(int i = 0;i < count;i++){
            cin >> a >> b >> c;
            total += (a * c);
        }
        cout << total << endl;
        round--;
    }
}
