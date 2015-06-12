#include<iostream>
using namespace std;
int main(){
    string a;
    short w, l;
    string x;
    while(cin >> a >> w >> l >> x){
        char **p = new char*[l];
        for(int i = 0;i < l;i++){
            p[i] = new char[w];
        }
        for(int i = 0;i < l;i++){
            for(int j = 0;j < w;j++){
                cin >> p[i][j];
            }
        }
        cout << a << endl;
        if(x == "R"){
            for(int i = 0;i < l;i++){
                for(int j = w - 1;j >= 0;j--){
                    cout << p[i][j];
                }
                cout << endl;
            }
        }
        else if(x == "I"){
            for(int i = l - 1;i >= 0;i--){
                for(int j = 0;j < w;j++){
                    cout << p[i][j];
                }
                cout << endl;
            }
        }
        else if(x == "IR" || x == "RI"){
            for(int i = l - 1;i >= 0;i--){
                for(int j = w - 1;j >= 0;j--){
                    cout << p[i][j];
                }
                cout << endl;
            }
        }
    }
}
