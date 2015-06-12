#include<iostream>
using namespace std;
int main(){
    int a, temp;
    while(cin >> a){
        int *n = new int[a];
        for(int i = 0;i < a;i++){
            cin >> n[i];
        }
        for(int i = 0;i < a - 1;i++){
            for(int j = i + 1;j < a;j++){
                if(n[i] > n[j]){
                    temp = n[i];
                    n[i] = n[j];
                    n[j] = temp;
                }
            }
        }
        for(int k = 0;k < a;k++){
            cout << n[k] << " ";
        }
        cout << endl;
        delete n;
    }
}
