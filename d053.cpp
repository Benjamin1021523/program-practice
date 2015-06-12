#include<iostream>
using namespace std;
int main(){
    long int m, n, output;
    while(cin >> m >> n){
        output = (n - 1) + n * (m - 1);
        cout << output << endl;
    }
}
