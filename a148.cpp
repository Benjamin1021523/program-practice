#include<iostream>
using namespace std;
int main(){
    int a, std, total;
    while(cin >> a){
        int *grade = new int[a];
        for(int j = 0;j < a;j++){
            cin >> grade[j];
        }
        std = 59 * a;
        total = 0;
        for(int i = 0;i < a;i++){
            total += grade[i];
        }
        if(std >= total){
            cout << "yes" << endl;
        }
        else{
            cout << "no" << endl;
        }
        delete grade;
    }
}
