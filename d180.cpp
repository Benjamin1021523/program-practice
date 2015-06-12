#include<iostream>
using namespace std;
int main(){
    long int left, right;
    int n, a, b;
    cin >> n;
    left = 0;
    right = 0;
    while(n > 0){
        cin >> a >> b;
        left += a;
        right += b;
        n -= 2;
    }
    if(left > right){
        cout << "left" << endl;
    }
    else{
        cout << "right" << endl;
    }
}
