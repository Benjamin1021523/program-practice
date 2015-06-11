#include<iostream>
using namespace std;
int main(){
    long int a, b;
    cin >> a;
    b = 1;
    cout << "2^0 = 1" << endl;
    for(int i = 1;i <= a;i++){
        b *= 2;
        cout << "2^" << i << " = " << b << endl;
    }
}
