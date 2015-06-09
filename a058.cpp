#include<iostream>
using namespace std;
int main(){
    int round, a;
    int m, m1, m2;
    cin >> round;
    m = 0;m1 = 0;m2 = 0;
    while(round > 0){
        cin >> a;
        if(a % 3 == 0){
            m++;
        }
        else if(a % 3 == 1){
            m1++;
        }
        else{
            m2++;
        }
        round--;
    }
    cout << m << " " << m1 << " " << m2 << endl;
}
