#include<iostream>
using namespace std;
int main(){
    int S;
    long long D;
    while(cin>>S>>D){
        int people=S;
        D-=S;
        while(D>0){
            people++;
            D-=people;
        }
        cout<<people<<'\n';
    }
    return 0;
}