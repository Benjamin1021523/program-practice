#include<iostream>
using namespace std;
int main(){
    long int a, b;
    while(cin >> a >> b){
        a -= 1;
        cout << b / 2 - a / 2 + (a == -1) << endl;
    }
}
