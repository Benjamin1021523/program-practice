#include<iostream>
using namespace std;

int main(){
    long int age;
    int price;
    while(cin >> age){
        price = (age >= 6) * 590 + (age >= 12) * 200 + (age >= 18) * 100
                - (age >= 60 ) * 491;
        cout << price << endl;
    }
}
