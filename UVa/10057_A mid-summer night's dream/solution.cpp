#include<iostream>
#include<algorithm>
using namespace std;
int x[10000000];
int main(){
    int n;
    while(cin>>n){
        for(int i=0;i<n;i++){
            cin>>x[i];
        }
        sort(x,x+n);
        int lo=x[(n-1)/2];
        int hi=x[n/2];
        int count=0;
        for(int i=0;i<n;i++){
            if(x[i]>=lo&&x[i]<=hi){
                count++;
            }
        }
        int diff=hi-lo+1;
        cout<<lo<<' '<<count<<' '<<diff<<'\n';
    }
    return 0;
}