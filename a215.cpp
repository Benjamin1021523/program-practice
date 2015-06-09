#include<iostream>
using namespace std;

int main(){
    long int a, b;
    while(cin >> a >> b){
        for(int i = 1;i > 0;i++){
            if(i * a + (i - 1) * i / 2 > b){
                cout << i << endl;
                break;
            }
        }
    }
}
