#include<iostream>
using namespace std;
int main(){
    int a;
    while(cin >> a){
        a = a - (a > 50);
        cout << a << endl;
    }
}
