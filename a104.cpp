#include<iostream>
using namespace std;
int main(){
    int n, temp;
    while(cin >> n){
        int *a = new int[n];
        for(int k = 0;k < n;k++){
            cin >> a[k];
        }
        for(int i = 0;i < n - 1;i++){
            for(int l = i + 1;l < n;l++){
                if(a[i] > a[l]){
                    temp = a[i];
                    a[i] = a[l];
                    a[l] = temp;
                }
            }
        }
        for(int j = 0;j < n;j++){
            cout << a[j] << " ";
        }
        cout << endl;
        delete a;
    }
}
