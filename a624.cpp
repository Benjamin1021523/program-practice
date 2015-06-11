#include<iostream>
using namespace std;
int main(){
    string a;
    bool det1, det2, det3, det4, det23, det34;
    while(cin >> a){
        det1 = (a.size() > 7);
        det2 = false;
        det3 = false;
        det4 = false;
        for(int i =0;i < a.size();i++){
            if(a[i] >= 'a' && a[i] <= 'z'){
                det2 = true;
            }
            else if(a[i] >= 'A' && a[i] <= 'Z'){
                det3 = true;
            }
            else{
                det4 = true;
            }
        }
        det23 = det2 * det3;
        det34 = (det4 * det2 || det4 * det3);
        cout << "This password is ";
        if(det1 && det23 && det4){
            cout << "STRONG";
        }
        else if(det1 * det23 || det23 * det4 || det4 * det1){
            cout << "GOOD";
        }
        else if(det1 || det23 || det34){
            cout << "ACCEPTABLE";
        }
        else{
            cout << "WEAK";
        }
        cout << endl;
    }
}
