#include<iostream>
using namespace std;
int main(){
    int round, n, m, output;
    cin >> round;
    while(round--){
        cin >> n >> m;
        output = 0;
        while(n / m > 0){
            output += (n / m);
            n = n % m + n / m;
            if(n == 1){
                cout << output << endl;
                break;
            }
            else if(n < m){
                cout << "cannot do this" << endl;
                break;
            }
        }
    }
}
