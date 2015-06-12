#include<iostream>
using namespace std;

int main(){
    long int a, b, G, temp;
    while(cin >> a >> b){
        G = 1;
        if(a < b){
            temp = a;
            a = b;
            b = temp;
        }
        for(int i = 2;i <= b;i++){
            if(a % i == 0 && b % i == 0){
                G = i;
            }
        }
        cout << G << endl;
    }
}
