#include<iostream>
using namespace std;

int main(){
    int a, b;
    while(cin >> a){
        if(a == 0)
            break;
        if(a <= 100){
            b = 91;
        }
        else if(a >= 101){
            b = a - 10;
        }
        cout << "f91(" << a << ") = " << b << endl;
    }
}
