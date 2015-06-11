#include<iostream>
using namespace std;
int main(){
    int a;
    while(cin >> a){
        a %= 2;
        if(a)
            cout << "Odd" << endl;
        else
            cout << "Even" << endl;
    }
}
