#include<iostream>
using namespace std;
int main(){
    long int a;
    int s;
    short x[25] = {5};
    while(cin >> a && a >= 0){
        for(int i = 0;i < 25;i++){
            x[i] = a % 3;
            a /= 3;
            if(a == 0){
                s = i;
                break;
            }
        }
        for(int i = s;i >= 0;i--){
            cout << x[i];
        }
        cout << endl;
    }
}
