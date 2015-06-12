#include<iostream>
using namespace std;
int main(){
    int a;
    while(cin >> a){
        cout << 2 * a + (a > 2) * (a - 1) * (a - 2) << endl;
    }
}
