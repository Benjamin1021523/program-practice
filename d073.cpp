#include<iostream>
using namespace std;
int main(){
    int a, b;
    while(cin >> a){
        b = a % 3;
        a /= 3;
        a = a + (b > 0);
        cout << a << endl;
    }
}
