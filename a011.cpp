#include<iostream>
//#include<string>
using namespace std;

int main(){
    string a;
    while(getline(cin,a)){
        int num = 0;
        bool det = false;
        for (int i = 0; i < a.size(); i++){
            if ((a[i] >= 'a' && a[i] <= 'z') || (a[i] >= 'A' && a[i] <= 'Z')){
                det = true;
            }
            else if(det){
                det = false;
                num++;
            }
        }
        if(det){
            num++;
        }
        cout << num << endl;
    }
}
