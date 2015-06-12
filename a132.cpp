#include<iostream>
using namespace std;
int main(){
    long int a;
    int count;
    string b, c;
    while(cin >> a && a != 0){
        b = "";
        c = "";
        count = 0;
        for(int i = 0;i < 32;i++){
            if(a != 0){
                b += (a % 2 + 48);
                count += (a % 2);
                a /= 2;
            }
            else{
                break;
            }
        }
        for(int i = b.size() - 1;i >= 0;i--){
            c += b[i];
        }
        cout << "The parity of " << c << " is " << count << " (mod 2)." << endl;
    }
}
