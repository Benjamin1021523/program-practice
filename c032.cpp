#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int a, ad;
    bool first = true;
    while(cin >> a && a != 0){
        if(first){
            cout << "PERFECTION OUTPUT" << endl;
            first = false;
        }
        ad = a;
        for(int i = 1;i <= a / 2;i++){
            if(a % i == 0){
                ad -= i;
            }
        }
        cout << setw(5) << a << "  ";
        if(ad > 0){
            cout << "DEFICIENT" << endl;
        }
        else if(ad == 0){
            cout << "PERFECT" << endl;
        }
        else{
            cout << "ABUNDANT" << endl;
        }
    }
    cout << "END OF OUTPUT" << endl;
}
