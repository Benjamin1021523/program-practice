#include<iostream>
using namespace std;
int main(){
    string a;
    int count;
    while(getline(cin, a)){
        count = 1;
        for(int i = 1;i < a.size();i++){
            if(a[i - 1] == a[i]){
                count++;
            }
            else if(a[i - 1] != a[i]){
                if(count > 2){
                    cout << count << a[i - 1];
                }
                else if(count == 2){
                    cout << a[i - 1] << a[i - 1];
                }
                else if(count == 1){
                    cout << a[i - 1];
                }
                count = 1;
            }
            if(i == a.size() - 1){
                 if(count > 2){
                    cout << count << a[i];
                 }
                 else if(count == 2){
                     cout << a[i] << a[i];
                 }
                 else if(count == 1){
                     cout << a[i];
                 }
            }
        }
        if(a.size() == 1){
            cout << a;
        }
        cout << endl;
    }
}
