#include<iostream>
using namespace std;

int main(){
    int M,D,S = 0;
    while(cin >> M >> D){
        S = (2*M + D) % 3;
        if(S==0)
            cout << "normal" << endl;
        else if(S==1)
            cout << "good" << endl;
        else if(S==2)
            cout << "perfect" << endl;
    }
        return 0;
}
