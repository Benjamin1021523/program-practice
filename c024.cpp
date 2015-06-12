#include<iostream>
using namespace std;

int main(){
    long long int a;
    while(cin >> a){
        if(a < 0)
            break;
        cout << (1 + a) * a / 2 + 1 << endl;
    }
}



/*
1 2
2 4
3 7
4 11
5 16
6 22
7 29
8 37
9 46
10 56
*/
