#include<iostream>
using namespace std;
int countBits(int num){
    int count=0;
    while(num>0){
        if(num%2==1){
            count++;
        }
        num/=2;
    }
    return count;
}
int hexTodec(int num){
    int result=0;
    int base=1;
    while(num>0){
        int digit=num%10;
        result+=digit*base;
        base*=16;
        num/=10;
    }
    return result;
}
int main(){
    int N;
    cin>>N;
    while(N--){
        int M;
        cin>>M;
        int X1=M;
        int b1=countBits(X1);
        int X2=hexTodec(M);
        int b2=countBits(X2);
        cout<<b1<<" "<<b2<<'\n';
    }
    return 0;
}