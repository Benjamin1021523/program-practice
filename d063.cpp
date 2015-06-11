#include<iostream>
using namespace std;

int main(){
    bool a;
    while(cin >> a){
        a = (a < 1);
        cout << a << endl;
    }
}
