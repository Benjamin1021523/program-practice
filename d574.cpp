#include<iostream>
using namespace std;
int main(){
    long int x;
    string a, b;
    long int num;
    char temp;
    while(cin >> x){
        cin >> a;
        num = 1;
        b = "";
        temp = a[0];
        for(long int i = 1;i < x;i++){
            if(a[i] != temp){
                if(num >= 100000){
                    b += (num / 100000 + 48);
                    num -= (num / 100000 * 100000);
                }
                if(num >= 10000){
                    b += (num / 10000 + 48);
                    num -= (num / 10000 * 10000);
                }
                if(num >= 1000){
                    b += (num / 1000 + 48);
                    num -= (num / 1000 * 1000);
                }
                if(num >= 100){
                    b += (num / 100 + 48);
                    num -= (num / 100 * 100);
                }
                if(num >= 10){
                    b += (num / 10 + 48);
                    num -= (num / 10 * 10);
                }
                b += (num + 48);
                b += a[i - 1];
                num = 1;
                temp = a[i];
            }
            else{
                num++;
            }
            if(i == x - 1){
                if(num >= 100000){
                    b += (num / 100000 + 48);
                    num -= (num / 100000 * 100000);
                }
                if(num >= 10000){
                    b += (num / 10000 + 48);
                    num -= (num / 10000 * 10000);
                }
                if(num >= 1000){
                    b += (num / 1000 + 48);
                    num -= (num / 1000 * 1000);
                }
                if(num >= 100){
                    b += (num / 100 + 48);
                    num -= (num / 100 * 100);
                }
                if(num >= 10){
                    b += (num / 10 + 48);
                    num -= (num / 10 * 10);
                }
                b += (num + 48);
                b += a[x - 1];
            }
        }
        if(a.size() <= b.size()){
            cout << a << endl;
        }
        else{
            cout << b << endl;
        }
        cout << endl;
    }
}
