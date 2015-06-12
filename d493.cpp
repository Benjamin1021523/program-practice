#include<iostream>
#include<math.h>
using namespace std;

int main(){
    long int a, n;
    long long int e;
    while(cin >> a >> n){
        e = pow(a, n);
        cout << e << endl;
    }
}
