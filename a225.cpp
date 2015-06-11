#include<iostream>
using namespace std;
int main(){
    int a, temp;
    while(cin >> a){
        int *x = new int[a];
        for(int i = 0;i < a;i++){
            cin >> x[i];
        }
        for(int i = 0;i < a - 1;i++){
            for(int j = i + 1;j < a;j++){
                if(x[i] % 10 > x[j] % 10){
                    temp = x[i];
                    x[i] = x[j];
                    x[j] = temp;
                }
                else if(x[i] % 10 == x[j] % 10 && x[i] < x[j]){
                    temp = x[i];
                    x[i] = x[j];
                    x[j] = temp;
                }
            }
        }
        for(int i = 0;i < a;i++){
            cout <<  x[i] << " ";
        }
        cout << endl;
    }
}
