#include<iostream>
using namespace std;
int main(){
    long int a, a2, range;
    while(cin >> a){
        for(long int i = 1;i < a;i++){
            if(i * (i + 1) / 2 >= a){
                range = i + 1;
                break;
            }
        }
        a2 = a;
        a2 -= ((range - 1) * (range - 2) / 2);
        cout << "TERM " << a << " IS ";
        if(range % 2 == 1){
            cout << a2 << "/" << range - a2 << endl;
        }
        else{
            cout << range - a2 << "/" << a2 << endl;
        }
    }
}
