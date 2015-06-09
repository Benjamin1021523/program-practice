#include<iostream>
using namespace std;
int main(){
    int round;
    long int b;
    string a;
    cin >> round;
    while(round > 0){
        b = 1;
        cin >> a;
        for(int i = 0;i < a.size();i++){
            b *= (a[i] - 48);
        }
        cout << b << endl;
        round--;
    }
}
