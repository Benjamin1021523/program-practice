#include<iostream>
using namespace std;
long int func(int x);
int main(){
    int round, count;
    int a, b;
    cin >> round;
    count = 1;
    while(round > 0){
        cin >> a >> b;
        a -= 1;
        cout << "Case " << count << ": " << func(b) - func(a) << endl;
        round--;
        count++;
    }

}

long int output = 0;
    for(int i = 1;i <= x;i++){
        if(i * i <= x){
            output += (i * i);
        }
        else{
            break;
        }
    }
    return output;
}
