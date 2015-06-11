#include<iostream>
using namespace std;
int main(){
    int a1, a2, b1, b2, c11, c12, c21, c22;
    while(cin >> a1 >> a2 >> b1 >> b2){
        if(a1 + a2 != b1 + b2 || a1 + a2 != 6 || b1 + b2 != 6){
            cout << "No solutions." << endl << endl;
            continue;
        }
        int c = 0;
        for(int i = 0;i < 4;i++){
            c11 = i;
            c12 = a1 - c11;
            c21 = b1 - c11;
            if(c11 != c12 && c11 != c21 && c12 != c21 &&
                c12 >= 0 && c12 < 4 && c21 >= 0 && c21 < 4){
                break;
            }
            else if(i == 3){
                cout << "No solutions." << endl << endl;
                c = 1;
            }
        }
        c22 = 6 - c11 - c12 - c21;
        if(c != 1){
            cout << c11 << " " << c12 << endl;
            cout << c21 << " " << c22 << endl << endl;
        }
    }
}
