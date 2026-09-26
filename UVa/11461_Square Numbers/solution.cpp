#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int a,b;
    while(cin>>a>>b){
        if(a==0&&b==0){
            break;
        }
        int n;
        int sqrt_a=sqrt(a);
        int sqrt_b=sqrt(b);
        n=sqrt_b-sqrt_a;
        if(sqrt_a*sqrt_a==a){
            n+=1;
        }
        cout<<n<<'\n';
    }
    return 0;
}