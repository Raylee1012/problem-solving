#include<iostream>
using namespace std;
int main(){
    int N;
    while(cin>>N){
        int ans=N;
        while(N>=3){
            ans+=N/3;
            N=N/3+N%3;
        }
        if(N==2){
            ans+=1;
        }
        cout<<ans<<'\n';
    }
    return 0;
}