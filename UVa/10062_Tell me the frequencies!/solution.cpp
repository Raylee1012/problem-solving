#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int cnt[128];
bool cmp(int a,int b){
    if(cnt[a]!=cnt[b]){
        return cnt[a]<cnt[b];
    }
    return a>b;
}
int main(){
    string line;
    bool first=true;
    while(getline(cin,line)){
        for(int i=0;i<128;i++){
            cnt[i]=0;
        }
        for(int i=0;i<(int)line.length();i++){
            int ascii=line[i];
            cnt[ascii]++;
        }
        int chars[128];
        int size=0;
        for(int i=0;i<128;i++){
            if(cnt[i]>0){
                chars[size]=i;
                size++;
            }
        }
        sort(chars,chars+size,cmp);
        if(!first){
            cout<<'\n';
        }
        first=false;
        for(int i=0;i<size;i++){
            cout<<chars[i]<<' '<<cnt[chars[i]]<<'\n';
        }
    }
    return 0;
}