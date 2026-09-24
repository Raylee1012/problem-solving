#include<iostream>
using namespace std;
int main(){
    int T;
    cin>>T;
    for(int caseNum=1;caseNum<=T;caseNum++){
        int n;
        char ch1,ch2;
        cin>>ch1>>ch2>>n;
        long long M[n][n];
        bool flag=true;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin>>M[i][j];
                if(M[i][j]<0){
                    flag=false;
                }
            }
        }
        cout<<"Test #"<<caseNum<<": ";
        if(!flag){
            cout<<"Non-symmetric.\n";
            continue;
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(M[i][j]!=M[n-i-1][n-j-1]){
                    flag=false;
                    break;
                }
            }
            if(!flag){
                break;
            }
        }
        if(flag){
            cout<<"Symmetric.\n";
        }
        else{
            cout<<"Non-symmetric.\n";
        }
    }
    return 0;
}