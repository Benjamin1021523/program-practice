#include<iostream>
using namespace std;
int main(){
    int a, b, c, d;
    int degree;
    while(cin >> a >> b >> c >> d && (a != 0 || b != 0 || c != 0 || d != 0)){
        degree = 1080;
        degree += ((a - b) * 9 + 360 * (a < b));
        degree += ((c - b) * 9 + 360 * (c < b));
        degree += ((c - d) * 9 + 360 * (c < d));
        cout << degree << endl;
    }
}
