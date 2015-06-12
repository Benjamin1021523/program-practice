#include<iostream>
#include<math.h>
using namespace std;

int main(){
    unsigned long long int a = 0;
    unsigned long long int b = 0;
    unsigned long long int out = 0;
    while(cin >> a >> b){
        if(a >= b)
            out = a - b;
        else
            out = b - a;
        if(a <= pow(2,63) && b <= pow(2,63))
            cout << out << endl;
    }
}
