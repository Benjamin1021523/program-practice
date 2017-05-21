#include<iostream>
#include<string>

using namespace std;

int main(){
    string input;
    bool det = 0;
    while(getline(cin, input)){
        while(input.find("\"") != string::npos){
            if(det){
                input.replace(input.find("\""), 1, "\'\'");
                det = 0;
            }
            else{
                input.replace(input.find("\""), 1, "\`\`");
                det = 1;
            }
        }
    cout << input << endl;
    }
}
