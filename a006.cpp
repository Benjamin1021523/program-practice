#include<iostream>
#include<math.h>
using namespace std;

int main(){
    double a, b, c, ans;
    double d, det, t, t2;
    while(cin >> a >> b >> c){
        det = b * b - 4 * a * c;
        d = -b / (2 * a);
        if(det < 0){
            cout << "No real root" << endl;
        }
        else if(det == 0){
            if(d == -0)
                d = 0;
            cout << "Two same roots x=" << d << endl;
        }
        else{
            if(d == -0)
                d = 0;
            t = d + sqrt(det) / (2 * a);
            t2 = d - sqrt(det) / (2 * a);
            cout << "Two different roots x1=" << t << " , x2=" << t2 << endl;
        }
    }
}
