#include<iostream>
using namespace std;
int main(){
    int a, b, dif, dif2;
    while(cin >> a >> b){
        if(a < 0 && b < 0){
            break;
        }
        if(a < b){
            dif = b - a;
            if(dif > 100 + a - b){
                dif = 100 + a - b;
            }
        }
        else{
            dif = a - b;
            if(dif > 100 + b - a){
                dif = 100 + b - a;
            }
        }
        cout << dif << endl;
    }
}
