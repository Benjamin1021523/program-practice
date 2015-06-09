#include<iostream>
using namespace std;
int main(){
     string a, b;
     cin >> a;
     while(1){
        b = "";
        getline(cin, a);
        for(int i = 0;i < a.size();i++){
            b += (a[i] - 7);
        }
        cout << b << endl;
    }
}
