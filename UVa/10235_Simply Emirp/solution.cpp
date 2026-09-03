#include<iostream>
#include<cmath>
using namespace std;
bool check_prime(int n){
    if(n<2){
        return false;
    }
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
int reverse_num(int n){
    int buf[7];
    int len=0;
    while(n>0){
        buf[len++]=n%10;
        n/=10;
    }
    int result=0;
    for(int i=0;i<len;i++){
        result+=buf[i]*pow(10,len-1-i);
    }
    return result;
}
int main(){
    int n;
    while(cin>>n){
        int rev=reverse_num(n);
        cout<<n<<" is ";
        if(!check_prime(n)){
            cout<<"not prime";
        }
        else if(check_prime(rev)&&rev!=n){
            cout<<"emirp";
        }
        else{
            cout<<"prime";
        }
        cout<<".\n";
    }
    return 0;
}