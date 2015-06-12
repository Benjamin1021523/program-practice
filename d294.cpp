#include<iostream>
using namespace std;

int main(){
    long long int a, b, temp, total;
    while(cin >> a >> b){
        total = ((a + 1) * a / 2) * ((b + 1) * b / 2);
        cout << total << endl;
    }
}
