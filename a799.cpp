#include<iostream>
using namespace std;
int main(){
    long int n;
    while(cin >> n){
        cout << n * ((n > 0) - (n < 0)) << endl;
    }
}
