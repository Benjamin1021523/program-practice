#include<iostream>
using namespace std;
int main(){
    long int a;
    int x, output, total, round, b;
    cin >> round;
    while(round > 0){
        cin >> a;
        x = 1;
        b = a / 16;
        a %= 16;
        if(a == 0){
            output = 7;
        }
        total = 0;
        for(long int i = 0;i < a;i++){
            if(x * 10 / 17 == 0){
                output = 0;
                x *= 10;
            }
            else{
                output = x * 10 / 17;
                x = x * 10 % 17;
            }
            total += output;
        }
        total += (b * 72);
        cout << output << " " << total << endl;
        round--;
    }
}
