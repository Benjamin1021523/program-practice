#include<iostream>
using namespace std;

int main(){
    int a, b;
    string input;
    while(cin >> input){
        bool det;
        b = input.size() - 1;
        a = 0;
        for(int i = 0;i <= 500;i++){
            if(input[a] == input[b]){
                det = true;
            }
            else{
                det = false;
                break;
            }
            a++;
            b--;
            if(a >= b){
                break;
            }
        }
        if(det)
            cout << "yes" << endl;
        else
            cout << "no" << endl;
    }
}
