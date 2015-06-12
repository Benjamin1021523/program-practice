#include<iostream>
using namespace std;
int main(){
    int a, b;
    while(cin >> a){
        b =a - (a >= 15) * 15 + (a < 15) * 9;
        cout << b << endl;
    }
}
