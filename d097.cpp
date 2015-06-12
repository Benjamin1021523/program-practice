#include<iostream>
using namespace std;
int d(int a,int b);

int main(){
    int num, temp;
    while(cin >> num){
        int *input = new int[num];
        int *destence = new int[num - 1];
        int *def = new int[num - 1];
        for(int i = 0;i < num;i++){
            cin >> input[i];
        }
        for(int i = 1;i < num;i++){
            def[i - 1] = i;
        }
        for(int i = 0;i < num - 1;i++){
            destence[i] = d(input[i], input[i+1]);
        }
        for(int i = 0;i < num - 2;i++){
            for(int j = i + 1;j < num - 1;j++){
                if(destence[i] > destence[j]){
                    temp = destence[i];
                    destence[i] = destence[j];
                    destence[j] = temp;
                }
            }
        }
        bool det = true;
        for(int i = 0;i < num - 1;i++){
            if(def[i] != destence[i]){
                det = false;
                break;
            }
        }
        if(det){
            cout << "Jolly" << endl;
        }
        else{
            cout << "Not jolly" << endl;
        }
        delete input;delete def;delete destence;
    }
}

int d(int a,int b){
    if(a > b){
        return a - b;
    }
    else{
        return b - a;
    }
}
