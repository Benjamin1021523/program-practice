#include<iostream>
using namespace std;
main(){
    int a;
    while(cin >> a){
        if(a == 0){
            break;
        }
        else if(a >= 10000){
            break;
        }
        for(int i = 1;i < a;i++){
            if(i % 7 != 0){
                cout << i << " ";
            }
        }
        cout << endl;
    }
}
