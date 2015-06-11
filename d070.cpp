#include<iostream>
using namespace std;

int main(){
    int year = 0;
    while(cin >> year){
        if(year == 0)
            break;

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
    }
}