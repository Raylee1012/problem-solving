#include<iostream>
#include<string>
using namespace std;
int main(){
    int doom[13]={-1,10,21,7,4,9,6,11,8,5,10,7,12};
    string date[] = {"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};
    int N;
    cin>>N;
    while(N--){
        int M,D;
        cin>>M>>D;
        int k=(D-doom[M])%7;
        if(k>=0){
            cout<<date[k]<<'\n';
        }
        else{
            cout<<date[k+7]<<'\n';
        }
    }
    return 0;
}