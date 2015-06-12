#include<iostream>

using namespace std;

int main(){
    char a[1000] = {0};

    while(cin >> a){
        int degree = 0;
        int total = 0;
        int tot = 0;

        for(int i = 0;i < 1000;i++){
            if(a[i] == '\0')
                break;
            tot += (a[i] - 48);
        }
        if(a[0] == 48){//ascii
            break;
        }
        for(int i = 0;i < 1000;i++){
            if(a[i] == '\0')
                break;
            total += (a[i] - 48);
        }
        
        degree++;
        if(total > 9){
            int a0,a1,a2,a3,aa=0;
            a0 = (total - total%1000)/1000;
            total = total % 1000;
            a1 = (total - total%100)/100;
            total = total % 100;
            a2 = (total - total%10)/10;
            total = total % 10;
            a3 = total;
            aa = a0 + a1 + a2 + a3;
            degree++;
            if(aa > 9){
                degree++;
            }
        }
        
        if(tot % 9 != 0)
            degree = 0;

        if(degree!=0){
            cout << a << " is a multiple of 9 and has 9-degree " << degree << "." << endl;
        }
        else
            cout << a << " is not a multiple of 9." << endl;
    }
    return 0;
}
