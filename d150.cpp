#include<iostream>
using namespace std;
int main(){
    int round;
    int num, temp;
    long int total;
    cin >> round;
    while(round--){
        total = 0;
        cin >> num;
        int *a = new int[num];
        for(int i = 0;i < num;i++){
            cin >> a[i];
        }
        for(int i = 0;i < num - 1;i++){
            for(int j = i + 1;j < num;j++){
                if(a[i] < a[j]){
                    temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                }
            }
        }
        for(int i = 2;i < num;i+=3){
            total += a[i];
        }
        cout << total << endl;
    }
}
