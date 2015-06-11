#include<iostream>
using namespace std;

int main(){
    int a;
    while(cin >> a){
        int out1 = 0;
        int out2 = 1;
        int output = 0;
        a %= 20016;
        for(int i = 1;i <= a;i++){
            output = out1 + out2;
            out1 = out2;
            out2 = output;
            out1 %= 10007;
            out2 %= 10007;
        }
        output %= 10007;
        cout << output << endl;
    }
}
