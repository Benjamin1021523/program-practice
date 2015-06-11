#include<iostream>
using namespace std;
int main(){
    string a, b;
    bool c, d;
    while(cin >> a){
        c = false;
        d = false;
        b = "";
        for(int i = 0;i < a.size() / 2 + 1;i++){
            if(a[i] != a[a.size() - 1 - i]){
                c = true;
                break;
            }
        }
        for(int i = 0;i < a.size() - 1;i++){
            if(2 * (a[i] - 48) < a[i + 1] - 48){
                c = true;
                break;
            }
        }
        if(c){
            cout << "INCORRECT" << endl;
        }
        else{
            for(int i = 0;i < a.size();i++){
                if(a[i] % 2 == 0){
                    b += a[i];
                    d = true;
                }
            }
            if(d){
                cout << b << endl;
            }
            else{
                cout << "0" << endl;
            }
        }
    }
}
