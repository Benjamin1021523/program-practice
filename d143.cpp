#include<iostream>
using namespace std;
int main(){
    long int a, b;
    int round;
    cin >> round;
    while(round--){
        cin >> a >> b;
        if(a > b)
            cout << ">";
        else if(a < b)
            cout << "<";
        else
            cout << "=";
        cout << endl;
    }
}
