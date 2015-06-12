#include<iostream>
using namespace std;
int main(){
    int n, k, output, a;
    while(cin >> n >> k){
        output = n;
        for(int i = 1;i > 0;i++){
            if(n / k == 0)
                break;
            else{
                output = output + n / k;
                n = n - n / k * k + n / k;
            }
        }
        cout << output << endl;
    }
}
