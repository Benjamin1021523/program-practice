#include<iostream>
using namespace std;

int main(){
    int a;
    long long int f0, f1, output;
    while(cin >> a){
        f0 = 0;
        f1 = 1;
        output = 1;
        for(int i = 0;i < a;i++){
            output = f0 + f1;
            f0 = f1;
            f1 = output;
        }
        cout << output << endl;
    }
}
