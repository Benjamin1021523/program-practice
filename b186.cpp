#include<iostream>
using namespace std;
int main(){
    int a, b, c, mount;
    while(cin >> a >> b >> c){
        if(a / 10 > c / 2){
            mount = c / 2;
        }
        else{
            mount = a / 10;
        }
        b += mount;
        cout << a << " cookies," << b << " chocolates," << c << " cakes." << endl;
    }
}
