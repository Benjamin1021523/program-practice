#include<iostream>
using namespace std;
int main(){
    int n;
    unsigned long long int output, die, born;
    while(cin >> n){
        n++;
        die = 0;
        born = 2;
        output = 0;
        for(int i = 0;i < n;i++){
            if(i == 10){
                die = 2;
            }
            output += born;
            output -= die;
            born *= 2;
            die *= 2;
        }
        cout << output << endl;
    }
}
