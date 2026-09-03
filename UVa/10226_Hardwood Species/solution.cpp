#include<iostream>
#include<string>
#include<algorithm>
#include<iomanip>
using namespace std;
string names[100001];
int cnt[100001];
bool cmp(int a,int b){
    return names[a]<names[b];
}
int main(){
    int T;
    cin>>T;
    cin.ignore();
    cin.ignore();
    bool first=true;
    while(T--){
        if(!first){
            cout<<'\n';
        }
        first=false;
        int size=0;
        int total=0;
        string line;
        while(getline(cin,line)){
            if(line.empty()){
                break;
            }
            total++;
            bool found=false;
            for(int i=0;i<size;i++){
                if(names[i]==line){
                    cnt[i]++;
                    found=true;
                    break;
                }
            }
            if(!found){
                names[size]=line;
                cnt[size]=1;
                size++;
            }
        }
        int idx[100001];
        for(int i=0;i<size;i++){
            idx[i]=i;
        }
        sort(idx,idx+size,cmp);
        for(int i=0;i<size;i++){
            cout<<names[idx[i]]<<" "<<fixed<<setprecision(4)<<cnt[idx[i]]*100.0/total<<'\n';
        }
    }
    return 0;
}