#include<iostream>
using namespace std;

int main(){
    int a;
    int devide;
    int plus;
    int plus2;
    while(cin >> a){
        devide = 2;
        plus = 1;
        plus2 = 1;
        for(int i = 2;i <= a;i++){
            plus += plus2;
            devide = devide + plus;
            plus2++;
        }
        cout << devide << endl;
    }
}
