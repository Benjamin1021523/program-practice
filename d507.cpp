#include<iostream>
using namespace std;
int main(){
    int a[3];
    int temp;
    while(cin >> a[0] >> a[1] >> a[2]){
        for(int i = 0;i < 2;i++){
            for(int j = i + 1;j < 3;j++){
                if(a[i] > a[j]){
                    temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                }
            }
        }
        if(a[0] * a[0] + a[1] * a[1] > a[2] * a[2])
            cout << "acute triangle";
        else if(a[0] * a[0] + a[1] * a[1] < a[2] * a[2])
            cout << "obtuse triangle";
        else
            cout << "right triangle";
        cout << endl;
    }
}
