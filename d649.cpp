#include<iostream>
using namespace std;
int main(){
    int a;
    while(cin >> a){
        for(int i = a;i > 0;i--){
            for(int j = 1;j <= a;j++){
                if(j < i){
                    cout << "_";
                }
                else{
                    cout << "+";
                }
            }
            cout << endl;
        }
    }
}
