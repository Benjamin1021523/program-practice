#include<iostream>
using namespace std;
int main(){
    long long int a, b, c;
    while(cin >> a >> b >> c){
        if(a + b > c && a < c && b < c){
            if(a > b)
                cout << "A" << endl;
            else
                cout << "B" << endl;
        }
        else if(a + c > b && a < b && c < b){
            if(a > c)
                cout << "A" << endl;
            else
                cout << "C" << endl;
        }
        else if(b + c > a && b < a && c < a){
            if(b > c)
                cout << "B" << endl;
            else
                cout << "C" << endl;
        }
        else if(a + b < c){
            cout << "C" << endl;
        }
        else if(a + c < b){
            cout << "B" << endl;
        }
        else if(b + c < a){
            cout << "A" << endl;
        }
    }
}
