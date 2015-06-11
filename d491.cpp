#include<iostream>
using namespace std;
int main(){
    long long int a, b, c, temp;
    while(cin >> a >> b){
        if(a > b){
            temp = a;
            a = b;
            b = temp;
        }
        if(a < b && a % 2 == 1){
            a++;
        }
        if(a < b && b % 2 == 1){
            b--;
        }
        if(a == b && a % 2 == 0){
            c = a;
        }
        else if(a == b && a % 2 == 1){
            c = 0;
        }
        else{
            c = (a + b) * ((b - a) / 2 + 1) / 2;
        }
        cout << c << endl;
    }
}
