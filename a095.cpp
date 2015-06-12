#include<iostream>
using namespace std;
int main(){
    long int a, b, output;
    while(cin >> a >> b){
        if(a == b){
            cout << b << endl;
        }
        else{
            cout << b + 1 << endl;
        }
    }
}
