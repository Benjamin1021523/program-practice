#include<iostream>
using namespace std;
int main(){
    int a, a1, a2, a3, b;
    while(cin >> a){
        a1 = 0;a2 = 0;a3 = 0;
        if(a > 10){
            a1 = 10;
        }
        else{
            a1 = a;
        }
        a -= 10;
        if(a > 10){
            a2 = 10;
        }
        else if(a > 0){
            a2 = a;
        }
        a -= 10;
        if(a > 20){
            a3 = 20;
        }
        else if(a > 0){
            a3 = a;
        }
        b = 6 * a1 + 2 * a2 + a3;
        cout << b << endl;
    }
}
