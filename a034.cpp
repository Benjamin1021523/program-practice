#include<iostream>
using namespace std;

int main(){
    int input;
    while(cin >> input){
        int n = 0;
        bool *bit = new bool[16];
        while(input != 0){
            bit[n] = input % 2;
            input /= 2;
            
            n++;
        }
        for(int i = n - 1;i >= 0;i--)
            cout << bit[i];
        cout << endl;
        delete bit;
    }
}
