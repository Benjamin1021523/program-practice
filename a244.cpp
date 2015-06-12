#include<iostream>
using namespace std;
int main(){
    int round, a;
    long long int b, c;
    cin >> round;
    while(round > 0){
        cin >> a >> b >> c;
        switch(a){
            case 1:
                cout << b + c << endl;
                break;
            case 2:
                cout << b - c << endl;
                break;
            case 3:
                cout << b * c << endl;
                break;
            case 4:
                cout << b / c << endl;
                break;
        }
        round--;
    }
}
