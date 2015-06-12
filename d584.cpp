#include<iostream>
using namespace std;

int main(){
    int c, l, out;
    while(cin >> c >> l){
        if(c == 0){
            out = 0;
        }
        else if(c == 2){
            out = (l - 8) * 3 + (l >= 8) + (l >= 30) + (l >= 70) + 3 * (l >= 120);
        }
        else{
            out = (l - 10) * 3 + (l >= 10) + (l >= 30) + (l >= 70) + 3 * (l >= 120);
        }
        cout << out << endl;
    }
}
