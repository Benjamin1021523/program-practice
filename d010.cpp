#include<iostream>
using namespace std;

int main(){
    int a, at;
    while(cin >> a){
        at = a;
        for(int i = 1;i <= a / 2;i++){
            if(a % i == 0){
                at -= i;
            }
        }
        if(at < 0){
            cout << "abundant number" << endl;
        }
        else if(at > 0){
            cout << "deficient number" << endl;
        }
        else{
            cout << "perfect number" << endl;
        }
    }
}
