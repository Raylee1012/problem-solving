#include<iostream>
using namespace std;
long long calc(long long x,long long y){
    return (1+(x+y))*(x+y)/2+x;
}
int main(){
    int n;
    cin>>n;
    for(int caseNum=1;caseNum<=n;caseNum++){
        long long x1,y1,x2,y2;
        cin>>x1>>y1>>x2>>y2;
        cout<<"Case "<<caseNum<<": "<<calc(x2,y2)-calc(x1,y1)<<'\n';
    }
    return 0;
}