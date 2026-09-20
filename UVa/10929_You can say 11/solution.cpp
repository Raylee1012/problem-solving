#include<iostream>
#include<string>
using namespace std;
int main(){
    string N;
    while(cin>>N&&N!="0"){
        int odd=0,even=0;
        for(int i=0;i<(int)N.length();i++){
            if(i%2==0){
                odd+=N[i]-'0';
            }
            else{
                even+=N[i]-'0';
            }
        }
        if((odd-even)%11==0){
            cout<<N<<" is a multiple of 11.\n";
        }
        else{
            cout<<N<<" is not a multiple of 11.\n";
        }
    }
    return 0;
}