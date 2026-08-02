#include<iostream>
using namespace std;
int main(){
    int num1,num2;
    while(cin>>num1>>num2){
        if(num1==0&&num2==0){
            break;
        }
        int carry=0;
        int carryCount=0;
        while(num1>0||num2>0){
            int digit1=num1%10;
            int digit2=num2%10;
            int sum=digit1+digit2+carry;
            if(sum>=10){
                carry=1;
                carryCount++;
            }
            else{
                carry=0;
            }
            num1/=10;
            num2/=10;
        }
        if(carryCount==0){
            cout<<"No carry operation."<<endl;
        }
        else if(carryCount==1){
            cout<<"1 carry operation."<<endl;
        }
        else{
            cout<<carryCount<<" carry operations."<<endl;
        }
    }
    return 0;
}