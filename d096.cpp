#include<iostream>
using namespace std;
int main(){
    long long int a, b;
    while(cin >> a){
        a /= 2;
        a++;
        a = a * a;
        b = 6 * a - 9;
        cout << b << endl;
    }
}
