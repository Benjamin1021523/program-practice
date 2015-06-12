#include<iostream>
using namespace std;
int main(){
    int range;
    while(cin >> range){
        bool **a = new bool*[range];
        bool *cum = new bool[range];
        bool *row = new bool[range];
        for(int i = 0;i < range;i++){
            a[i] = new bool[range];
        }
        for(int i = 0;i < range;i++){
            for(int j = 0;j < range;j++){
                cin >> a[i][j];
            }
        }
        for(int i = 0;i < range;i++){
            row[i] = 0;
            for(int j = 0;j < range;j++){
                if(a[i][j]){
                    if(row[i]){
                        row[i] = 0;
                    }
                    else{
                        row[i] = 1;
                    }
                }
            }
        }
        for(int i = 0;i < range;i++){
            cum[i] = 0;
            for(int j = 0;j < range;j++){
                if(a[j][i]){
                    if(cum[i]){
                        cum[i] = 0;
                    }
                    else{
                        cum[i] = 1;
                    }
                }
            }
        }
        int x, y;
        x = -1;
        y = -1;
        bool det = 1;
        for(int i = 0;i < range;i++){
            if(row[i]){
                if(x < 0){
                    x = i;
                }
                else{
                    det = 0;
                    break;
                }
            }
            if(cum[i]){
                if(y < 0){
                    y = i;
                }
                else{
                    det = 0;
                    break;
                }
            }
        }
        if(det){
            if(x >= 0 && y >= 0){
                cout << "Change bit (" << x + 1 << "," << y + 1 << ")" << endl;
            }
            else if(x < 0 && y < 0){
                cout << "OK" << endl;
            }
            else{
                cout << "Corrupt" << endl;
            }
        }
        else{
            cout << "Corrupt" << endl;
        }
    }
}
