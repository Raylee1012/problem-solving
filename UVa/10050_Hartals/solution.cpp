#include<iostream>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        int N;
        cin>>N;
        int P;
        cin>>P;
        int h[100];
        for(int i=0;i<P;i++){
            cin>>h[i];
        }
        bool hartal[3651]={false};
        for(int i=0;i<P;i++){
            for(int j=h[i];j<=N;j+=h[i]){
                hartal[j]=true;
            }
        }
        int lost=0;
        for(int day=1;day<=N;day++){
            int dayofweek=day%7;
            bool isFriday=(dayofweek==6);
            bool isSaturday=(dayofweek==0);
            if(hartal[day]&&!isFriday&&!isSaturday){
                lost++;
            }
        }
        cout<<lost<<'\n';
    }
    return 0;
}