#include<iostream>
using namespace std;
long int f91(long int a);

int main(){
    long int a;
    while(cin >> a){
        cout << f91(a) << endl;
    }
}

long int f91(long int a){
    if(a >= 101){
        return a - 10;
    }
    else{
        return f91(f91(a + 11));
    }
}
