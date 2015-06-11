#include<iostream>
using namespace std;
int main(){
    long int a, b, output, temp;
    while(cin >> a >> b){
        if(a < b){
            temp = a;
            a = b;
            b = temp;
        }
        if(a % b == 0){
            output = b;
        }
        while(a % b != 0){
            temp = a % b;
            a = b;
            b = temp;
            if(a % b == 0){
                output = b;
                break;
            }
        }
        cout << output << endl;
    }
}
