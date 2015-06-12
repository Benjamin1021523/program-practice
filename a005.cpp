#include<iostream>
using namespace std;

int main(){
    int count = 0;
    cin >> count;
    int out = 0;
    int ch = 0;
    while(count > 0){
        int a[4] = {0};
            cin >> a[0] >> a[1] >> a[2] >> a[3];
            if(a[0] < a[1]){
                if((a[1] / a[0]) == (a[3] / a[2])){
                    ch = a[1] / a[0];
                    out = a[3] * ch;
                }
                else if((a[1] - a[0]) == (a[3] - a[2])){
                    ch = a[1] - a[0];
                    out = a[3] + ch;
                }
            }
            else if(a[0] > a[1]){
                if((a[0] / a[1]) == (a[2] / a[3])){
                ch = a[0] / a[1];
                out = a[3] / ch;
                }
                else if((a[0] - a[1]) == (a[2] - a[3])){
                    ch = a[0] - a[1];
                    out = a[3] - ch;
                }
            }
            else
                out = a[0];
            cout << a[0] << " " << a[1] << " " << a[2] << " " << a[3] << " " <<  out << endl;
        count--;
    }
}
