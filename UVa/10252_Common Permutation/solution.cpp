#include<iostream>
#include<string>
using namespace std;
int main(){
    string a,b;
    while(getline(cin,a)&&getline(cin,b)){
        int cnt_a[26]={0};
        int cnt_b[26]={0};
        for(int i=0;i<(int)a.size();i++){
            cnt_a[a[i]-'a']++;
        }
        for(int i=0;i<(int)b.size();i++){
            cnt_b[b[i]-'a']++;
        }
        string result="";
        for(int i=0;i<26;i++){
            int min_cnt=min(cnt_a[i],cnt_b[i]);
            for(int j=0;j<min_cnt;j++){
                result+=(char)('a'+i);
            }
        }
        cout<<result<<'\n';
    }
    return 0;
}