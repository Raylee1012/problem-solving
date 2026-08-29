#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int binTOdec(string c){
    long long result=0;
    for(int i=0;i<(int)c.size();i++){
        result=result*2+(c[i]-'0');
    }
    return result;
}
int main(){
    int N;
    cin>>N;
    for(int caseNum=1;caseNum<=N;caseNum++){
        string s1,s2;
        cin>>s1>>s2;
        long long n1=binTOdec(s1);
        long long n2=binTOdec(s2);
        long long g=__gcd(n1,n2);
        cout<<"Pair #"<<caseNum<<": ";
        if(g>1){
            cout<<"All you need is love!\n";
        }
        else{
            cout<<"Love is not all you need!\n";
        }
    }
    return 0;
}