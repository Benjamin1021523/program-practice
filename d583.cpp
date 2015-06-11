#include<iostream>
using namespace std;
int main(){
    long int a, b;
    while(cin >> a){
        for(long int i = 0;i < a;i++){
            cin >> b;
        }
        for(long int i = 0;i < a;i++){
            cout << i + 1 << " ";
        }
        cout << endl;
    }
}
