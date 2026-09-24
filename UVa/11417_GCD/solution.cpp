#include<iostream>
using namespace std;
int GCD(int x,int y){
    while(y!=0){
        int temp=y;
        y=x%y;
        x=temp;
    }
    return x;
}
int main(){
    int N,G;
    while(cin>>N&&N>0){
        G=0;
        for(int i=1;i<N;i++){
            for(int j=i+1;j<=N;j++){
                G+=GCD(i,j);
            }
        }
        cout<<G<<'\n';
    }
    return 0;
}