#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main(){
    int S;
    cin>>S;
    while(S--){
        int N,I;
        double p;
        cin>>N>>p>>I;
        if(p==0.0){
            cout<<fixed<<setprecision(4)<<0.0000<<'\n';
            continue;
        }
        double q=1-p;
        double ans=pow(q,I-1)*p/(1-pow(q,N));
        cout<<fixed<<setprecision(4)<<ans<<'\n';
    }
    return 0;
}