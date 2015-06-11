#include<iostream>
using namespace std;
int main(){
    int a, b, c;
    int count = 0;
    int line = 0;
    int temp;
    while(cin >> a >> b >> c){
        if(a + b > c && b + c > a && c + a > b)
            count++;
        line++;
        if(line == 5)
            break;
    }
    cout << count << endl;
}
