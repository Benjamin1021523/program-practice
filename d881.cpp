#include<iostream>
using namespace std;

int main(){
    int input, output, plust;
    plust = 0;
    for(int i = 48;i >= 1;i--){
        plust = plust + i * (49 - i);
    }
    while(cin >> input){
        output = 50 + 1225 + plust * input;
        cout << output << endl;
    }
}
