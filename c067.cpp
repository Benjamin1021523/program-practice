#include<iostream>
using namespace std;

int main(){
    int n;
    int count = 0;
    while(cin >> n){
        if(n == 0){
            break;
        }
        int *brick = new int[n];
        int *average = new int();
        int *move = new int();
        for(int i = 0;i < n;i++){
            cin >> brick[i];
            *average += brick[i];
        }
        *average /= n;
        for(int j = 0;j < n;j++){
            if(brick[j] > *average){
                *move += (brick[j] - *average);
            }
        }
        count++;
        cout << "Set #" << count << endl;
        cout << "The minimum number of moves is " << *move << "." << endl << endl;
        delete brick;
        delete average;
        delete move;
    }
}
