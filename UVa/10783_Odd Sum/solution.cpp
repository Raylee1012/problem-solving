#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int caseNum=1;caseNum<=n;caseNum++){
        int n1,n2;
        cin>>n1>>n2;
        int sum=0;
        for(int s=n1;s<=n2;s++){
            if(s%2==1){
                sum+=s;
            }
        }
        cout<<"Case "<<caseNum<<": "<<sum<<'\n';
    }
    return 0;
}