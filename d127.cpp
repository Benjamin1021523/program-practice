#include<iostream>
using namespace std;
int main(){
    long long int l;
    while(cin >> l){
        l /= 2;
        cout << ((l + 1) / 2) * (l - ((l + 1) / 2)) << endl;
    }
}
