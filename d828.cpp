#include<iostream>
using namespace std;
int main(){
    long int n;
    int f0, f1, temp;
    while(cin >> n){
        n %= 30000;
        if(n <= 10000){
            f0 = 0;
            f1 = 1;
            for(int i = 0;i < n;i++){
                temp = f0;
                f0 = f1;
                f1 = temp + f0;
                f0 %= 10000;
                f1 %= 10000;
            }
        }
        else if(n <= 20000){
            f0 = 6875;
            f1 = 7501;
            for(int i = 10000;i < n;i++){
                temp = f0;
                f0 = f1;
                f1 = temp + f0;
                f0 %= 10000;
                f1 %= 10000;
            }
        }
        else if(n <= 30000){
            f0 = 3125;
            f1 = 626;
            for(int i = 20000;i < n;i++){
                temp = f0;
                f0 = f1;
                f1 = temp + f0;
                f0 %= 10000;
                f1 %= 10000;
            }
        }
        f1 %= 10000;
        cout << f1 << endl;
    }
}
