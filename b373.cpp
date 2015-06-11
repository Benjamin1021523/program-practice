#include<iostream>
using namespace std;
int main(){
    int a;
    int change, temp;
    while(cin >> a){
        int *x = new int[a];
        change = 0;
        for(int i = 0;i < a;i++){
            cin >> x[i];
        }
        for(int i = 0;i < a - 1;i++){
            for(int j = i + 1;j < a;j++){
                if(x[i] > x[j]){
                    temp = x[i];
                    x[i] = x[j];
                    x[j] = temp;
                    change++;
                }
            }
        }
        cout << change << endl;
        delete x;
    }
}
