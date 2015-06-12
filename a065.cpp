#include<iostream>
using namespace std;
int main(){
    string a;
    while(cin >> a){
        int *x = new int[a.size() - 1];
        for(int i = 0;i < a.size() - 1;i++){
            if(a[i] > a[i + 1]){
                x[i] = a[i] - a[i + 1];
            }
            else
                x[i] = a[i + 1] - a[i];
        }
        for(int j = 0;j < a.size() - 1;j++){
            cout << x[j];
        }
        cout << endl;
    }
}
