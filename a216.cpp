#include<iostream>
using namespace std;
long long int fn(int i);

int main(){
    long long int n, f, g;
    while(cin >> n){
        g = 0;
        for(int i = 1;i <= n;i++){
            g = g + fn(i);
        }
        cout << fn(n) << " ";

        cout << g << endl;
    }
}

long long int fn(int i){
    return i * (i + 1) / 2;
}
