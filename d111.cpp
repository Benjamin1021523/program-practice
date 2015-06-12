#include<iostream>
using namespace std;
int main(){
    long int a;
    bool det;
    while(cin >> a && a != 0){
        det = false;
        for(long int i = 1;i < 46341;i++){
            if(a == i * i){
                det = true;
                break;
            }
            else if(a < i * i){
                break;
            }
        }
        if(det){
            cout << "yes";
        }
        else{
            cout << "no";
        }
        cout << endl;
    }
}
