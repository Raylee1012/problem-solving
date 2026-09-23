#include<iostream>
#include<string>
using namespace std;
int main(){
    string n;
    while(cin>>n&&n!="0"){
        long long ans=0;
        while(n.length()!=1){
            ans=0;
            for(int i=0;i<(int)n.length();i++){
                ans+=n[i]-'0';
            }
            n=to_string(ans);
        }
        cout<<n<<'\n';
    }
    return 0;
}