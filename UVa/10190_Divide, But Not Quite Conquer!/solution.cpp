#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n,m;
    while(cin>>n>>m){
        if(n<m||n<=1||m<=1){
            cout<<"Boring!\n";
            continue;
        }
        bool ok=true;
        int cur=n;
        vector<int> seq;
        seq.push_back(cur);
        while(cur!=1){
            if(cur%m!=0){
                ok=false;
                break;
            }
            cur/=m;
            seq.push_back(cur);
        }
        if(ok){
            for(int i=0;i<(int)seq.size();i++){
                if(i>0){
                    cout<<" ";
                }
                cout<<seq[i];
            }
            cout<<'\n';
        }
        else{
            cout<<"Boring!\n";
        }
    }
    return 0;
}