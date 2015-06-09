//advance a022
#include<iostream>
using namespace std;
int main(){
    string a, b;
    while(cin >> a){
        b = "";
        for(int i = a.size() - 1;i >= 0;i--){
            b += a[i];
        }
        if(a == b){
            cout << "yes" << endl;
        }
        else{
            cout << "no" << endl;
        }
    }
}
