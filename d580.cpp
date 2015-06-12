#include<iostream>
using namespace std;
int main(){
    int n, f0, f1, temp, a;
    while(cin >> n){
        f0 = 0;
        f1 = 1;
        for(int i = 0;i < n;i++){
            temp = f0;
            f0 = f1;
            f1 = temp + f0;
            f0 %= 2012;
            f1 %= 2012;
        }
        f1 %= 2012;
        cout << f1 << endl;
    }
}
//Can't be sloved by the same way of a272.cpp, I don't know why.
