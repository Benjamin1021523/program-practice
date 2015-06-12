#include<iostream>
using namespace std;
int main(){
    long int round, w, c;
    cin >> round;
    while(round > 0){
        while(cin >> w >> c){
            long int *part = new long int[c];
            for(long int i = 0;i < c;i++){
                cin >> part[i];
            }
            for(long int j = 0;j < c;j++){
                if(part[j] <= w){
                    cout << "NOOOO!!! JACKY XX!" << endl;
                    break;
                }
                else if(j == c - 1){
                    cout << "YEEES!!! INKER!" << endl;
                }
            }
            delete part;
        }
        round--;
    }
}
