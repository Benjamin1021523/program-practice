#include<iostream>
using namespace std;

int main(){
    int year, round, c;
    cin >> round;
    c = 0;
    while(round > 0){
        cin >> year;
        c++;
        cout << "Case " << c << ": ";
        if(year % 4 == 0){
            if(year % 100 == 0){
                if(year % 400 == 0){
                    cout << "a leap year" << endl;
                }
                else
                    cout << "a normal year" << endl;
            }
            else
                cout << "a leap year" << endl;
        }
        else
            cout << "a normal year" << endl;
        round--;
    }
}
