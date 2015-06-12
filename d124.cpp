#include<iostream>
using namespace std;
int main(){
    long int total;
    char a[10003] = {0};
    while(cin >> a){
        total = 0;
        for(int i = 0;a[i];i++){
            if(a[i] >= '0' && a[i] <= '9'){
                if(a[i] == '0' || a[i] == '3' || a[i] == '6' || a[i] == '9'){
                }
                else if(a[i] == '1' || a[i] == '4' || a[i] == '7'){
                    total++;
                }
                else if(a[i] == '2' || a[i] == '5' || a[i] == '8'){
                    total += 2;
                }
            }
        }
        if(total % 3 == 0)
            cout << "yes" << endl;
        else
            cout << "no" << endl;
    }
}
