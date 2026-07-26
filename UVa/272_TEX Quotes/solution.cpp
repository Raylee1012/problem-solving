#include<iostream>
#include<string>
using namespace std;
int main(){
    char c;
    bool first=true;
    while(cin.get(c)){
        if(c=='"'){
            if(first){
                cout<<"``";
            }
            else{
                cout<<"''";
            }
            first=!first;
        }
        else{
            cout<<c;
        }
    }
    return 0;
}