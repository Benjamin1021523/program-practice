#include<iostream>
#include<math.h>
using namespace std;

int main(){
    long long int i, n, m;
    while(cin >> n >> m){
        i = 1;
        i *= pow(2, 8 * (n - 1));
        i *= pow(2, (m - 1));
        cout << i << endl;
    }
}
