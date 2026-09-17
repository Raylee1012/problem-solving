#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        int s,d;
        cin>>s>>d;
        int a=(s+d)/2;
        int b=(s-d)/2;
        if((s+d)%2!=0||s<d){
            cout<<"impossible\n";
        }
        else{
            cout<<a<<' '<<b<<'\n';
        }
    }
    return 0;
}