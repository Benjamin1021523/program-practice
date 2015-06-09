#include<iostream>
using namespace std;
int main(){
    string x, a, b;
    int count = 0;
    while(cin >> x){
        a = "";
        count ++;
        for(int i = 0;i < x.size();i++){
            if(a == "" && x[i] == '0'){
                if(i == x.size() - 1){
                    a += x[i];
                }
                continue;
            }
            a += x[i];
        }
        b = "";
        for(int i = a.size() - 1;i >= 0;i--){
            if(b == "" && a[i] == '0'){
                if(i == 0){
                    b += a[i];
                }
                continue;
            }
            b += a[i];
        }
        cout << b << endl;
    }
}
