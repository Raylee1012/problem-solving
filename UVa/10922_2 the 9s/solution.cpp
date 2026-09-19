#include<iostream>
#include<string>
using namespace std;
int digitsum(string number){
    int sum=0;
    for(int i=0;i<(int)number.length();i++){
        sum+=number[i]-'0';
    }
    return sum;
}
int main(){
    string number;
    while(cin>>number&&number!="0"){
        int sum=digitsum(number);
        if(sum%9!=0){
            cout<<number<<" is not a multiple of 9.\n";
        }
        else{
            int degree=1;
            while(sum>=10){
                sum=digitsum(to_string(sum));
                degree++;
            }
            cout<<number<<" is a multiple of 9 and has 9-degree "<<degree<<".\n";
        }
    }
    return 0;
}