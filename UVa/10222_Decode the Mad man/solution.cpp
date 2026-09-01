#include<iostream>
#include<string>
using namespace std;
int main(){
    string keyboard="`1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./";
    string line;
    while(getline(cin,line)){
        for(int i=0;i<(int)line.size();i++){
            if(line[i]==' '){
                cout<<' ';
                continue;
            }
            char lower_c=tolower(line[i]);
            int pos=-1;
            for(int j=0;j<(int)keyboard.size();j++){
                if(keyboard[j]==lower_c){
                    pos=j;
                    break;
                }
            }
            if(pos>=2){
                char decode=keyboard[pos-2];
                cout<<decode;
            }
            else{
                cout<<line[i];
            }
        }
        cout<<'\n';
    }
    return 0;
}