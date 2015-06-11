#include<iostream>
using namespace std;
int main(){
    long int x, y, z, n, count;
    while(cin >> n){
        count = 0;
        for(x = n;x >= 0;x--){
            for(y = n / 2 + 1;y >= 0;y--){
                for(z = n / 2 + 1;z >= 0;z--){
                    if(x + 2 * y + 2 * z == n){
                        count++;
                    }
                }
            }
            x--;
        }
        cout << count << endl;
    }
}
