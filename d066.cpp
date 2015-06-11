#include<iostream>
using namespace std;
int main(){
    int a, b;
    while(cin >> a >> b){
        if((a == 7 && b >= 30)
        || (a >= 8 && a <= 16)){
            cout << "At School" << endl;
        }
        else
            cout << "Off School" << endl;
    }
}
