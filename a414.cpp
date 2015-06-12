#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
    long int a;
    int count;
    while(scanf("%d", &a) && a != 0){
        count = 0;
        for(int i = 1;i < 32;i++){
            if(a % 2 == 1){
                count++;
                a /= 2;
            }
            else
                break;
        }
        printf("%d\n", count);
    }
}
