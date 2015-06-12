#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int a;
    while(cin >> a){
        int out = 0;
        if(a == 0)
            break;
        for(int i = 1;i <= a;i++){
            out += pow(i,2);
        }
        cout << out << endl;
    }
}
