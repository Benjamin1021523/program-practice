#include<iostream>
using namespace std;
int main(){
    string a;
    int total;
    bool det;
    while(cin >> a && a != "0"){
        total = 0;
        det = 0;
        for(int i = 0;i < a.size();i++){
            if(a[i] <= 'Z' && a[i] >= 'A'){
                a[i] += 1;
                total += (a[i] - 'A');
            }
            else if(a[i] <= 'z' && a[i] >= 'a'){
                a[i] += 1;
                total += (a[i] - 'a');
            }
            else{
                det = 1;
                break;
            }
        }
        if(det){
            cout << "Fail" << endl;
        }
        else{
            cout << total << endl;
        }
    }
}
