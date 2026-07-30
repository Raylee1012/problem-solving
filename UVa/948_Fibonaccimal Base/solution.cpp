#include<iostream>
using namespace std;
int main(){
    int fib[500];
    fib[0]=0;
    fib[1]=1;
    int count=2;
    while(fib[count-1]<100000000){
        fib[count]=fib[count-1]+fib[count-2];
        count++;
    }
    int N;
    cin>>N;
    while(N--){
        int num;
        cin>>num;
        cout<<num<<" = ";
        int result[500]={0};
        int remaining=num;
        for(int i=count-1;i>=2;i--){
            if(fib[i]<=remaining){
                result[i]=1;
                remaining-=fib[i];
            }
        }
        bool start=false;
        for(int i=count-1;i>=2;i--){
            if(result[i]==1){
                start=true;
            }
            if(start){
                cout<<result[i];
            }
        }
        cout<<" (fib)\n";
    }
    return 0;
}