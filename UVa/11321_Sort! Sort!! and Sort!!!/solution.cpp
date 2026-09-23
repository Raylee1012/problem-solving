#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int M;
bool cmp(int x,int y){
    if((x%M)!=(y%M)){
        return (x%M)<(y%M);
    }
    else{
        if((x%2==0)&&(y%2==0)){
            return x<y;
        }
        else if((abs(x%2)==1)&&(abs(y%2)==1)){
            return x>y;
        }
        else{
            return abs(x%2)==1; 
        }
    }
}
int main(){
    int N;
    while(cin>>N>>M){
        if(N==0&&M==0){
            cout<<"0 0\n";
            break;
        }
        cout<<N<<' '<<M<<'\n';
        int num[N]={0};
        for(int i=0;i<N;i++){
            cin>>num[i];
        }
        sort(num,num+N,cmp);
        for(int i=0;i<N;i++){
            cout<<num[i]<<'\n';
        }
    }
    return 0;
}