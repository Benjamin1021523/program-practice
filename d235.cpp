#include<iostream>
using namespace std;
int main(){
    string a;
    while(cin >> a && a.size() != 1 || a[0] != '0'){
        int x, y;
        x = 0;y = 0;
        for(int i = 0;i < a.size();i+=2){
            x += a[i];
            x -= 48;
        }
        for(int i = 1;i < a.size();i+=2){
            y += a[i];
            y -= 48;
        }
        if((x - y) % 11 == 0){
            cout << a << " is a multiple of 11." << endl;
        }
        else{
            cout << a << " is not a multiple of 11." << endl;
        }
    }
}
