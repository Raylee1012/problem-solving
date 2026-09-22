#include<iostream>
using namespace std;
const int MAXN=20001;
int main(){
    int N;
    int caseNum=1;
    while(cin>>N){
        int b[N];
        int sum[MAXN]={0};
        bool flag=true;
        for(int i=0;i<N;i++){
            cin>>b[i];
            if(b[i]<1){
                flag=false;
            }
            if(i>0&&b[i]<=b[i-1]){
                flag=false;
            }
        }
        for(int i=0;i<N;i++){
            for(int j=i;j<N;j++){
                int x=b[i]+b[j];
                if(sum[x]>0){
                    flag=false;
                    break;
                }
                else{
                    sum[x]=1;
                }
            }
            if(!flag){
                break;
            }
        }
        if(flag){
            cout<<"Case #"<<caseNum++<<": It is a B2-Sequence.\n\n";
        }
        else{
            cout<<"Case #"<<caseNum++<<": It is not a B2-Sequence.\n\n";
        }
    }
    return 0;
}