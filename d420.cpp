#include<iostream>
using namespace std;
int main(){
    long int a, limit, at;
    int count = 0;
    while(cin >> a >> limit && a >= 0 && limit >= 0){
        count++;
        int term = 1;
        at = a;
        while(a <= limit && a != 1){
            if(a % 2 == 0){
                a /= 2;
                term++;
            }
            else{
                a *= 3;
                a += 1;
                if(a <= limit)
                    term++;
            }
        }
        cout << "Case " << count << ": A = " << at << ", limit = " << limit << ", number of terms = " << term << endl;
    }
}
