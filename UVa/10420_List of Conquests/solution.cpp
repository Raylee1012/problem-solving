#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
const int MAXN=2000;
string countries[MAXN];
int counts[MAXN]={0};
int total=0;
bool cmp(int a,int b){
    return countries[a]<countries[b];
}
int main(){
    int n;
    cin>>n;
    while(n--){
        string country,woman;
        cin>>country;
        getline(cin,woman);
        int idx=-1;
        for(int i=0;i<total;i++){
            if(countries[i]==country){
                idx=i;
            }
        }
        if(idx==-1){
            countries[total]=country;
            counts[total]=1;
            total++;
        }
        else{
            counts[idx]++;
        }
    }
    int order[MAXN];
    for(int i=0;i<total;i++){
        order[i]=i;
    }
    sort(order,order+total,cmp);
    for(int i=0;i<total;i++){
        cout<<countries[order[i]]<<' '<<counts[order[i]]<<'\n';
    }
    return 0;
}