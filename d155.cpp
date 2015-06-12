#include<iostream>
using namespace std;
int main(){
    string a, b;
    int aw = 0;
    int bw = 0;
    while(cin >> a >> b){
        if(a == "Game" && b == "Over"){
            break;
        }
        else if(a == "Scissors"){
            if(b == "Stone"){
                bw++;
                cout << "bwin" << endl;
            }
            else{
                aw++;
                cout << "awin" << endl;
            }
        }
        else if(a == "Paper"){
            if(b == "Scissors"){
                bw++;
                cout << "bwin" << endl;
            }
            else{
                aw++;
                cout << "awin" << endl;
            }
        }
        else if(a == "Stone"){
            if(b == "Paper"){
                bw++;
                cout << "bwin" << endl;
            }
            else{
                aw++;
                cout << "awin" << endl;
            }
        }
    }
    if(aw > bw){
        cout << "a's win" << endl;
    }
    else{
        cout << "b's win" << endl;
    }
}
