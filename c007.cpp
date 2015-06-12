#include<iostream>
using namespace std;
int main(){
    string a, b;
    char temp;
    bool det = false;
    while(getline(cin, a)){
        b = "";
        for(int i = 0;i < a.size();i++){
            if(a[i] == 34){
                if(det == false){
                    temp = 96;
                    b += temp;
                    b += temp;
                    det = true;
                }
                else{
                    temp = 39;
                    b += temp;
                    b += temp;
                    det = false;
                }
            }
            else{
                b += a[i];
            }
        }
        cout << b << endl;
    }
}
