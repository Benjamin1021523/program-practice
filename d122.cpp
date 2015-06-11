#include<iostream>
using namespace std;
int main(){
    long int a;
    int count;
    while(cin >> a){
        count = 0;
        a /= 5;
        count += a;
        if(a / 5 > 0){
            a /= 5;
            count += a;
            if(a / 5 > 0){
                a /= 5;
                count += a;
                if(a / 5 > 0){
                    a /= 5;
                    count += a;
                    if(a / 5 > 0){
                        a /= 5;
                        count += a;
                        if(a / 5 > 0){
                            a /= 5;
                            count += a;
                            if(a / 5 > 0){
                                a /= 5;
                                count += a;
                                if(a / 5 > 0){
                                    a /= 5;
                                    count += a;
                                    if(a / 5 > 0){
                                        a /= 5;
                                        count += a;
                                        if(a / 5 > 0){
                                            a /= 5;
                                            count += a;
                                            if(a / 5 > 0){
                                                a /= 5;
                                                count += a;
                                                if(a / 5 > 0){
                                                    a /= 5;
                                                    count += a;
                                                    if(a / 5 > 0){
                                                        a /= 5;
                                                        count += a;
                                                        if(a / 5 > 0){
                                                            a /= 5;
                                                            count += a;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        cout << count << endl;
    }
}
