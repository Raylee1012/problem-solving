#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    long long I;
    while(cin>>I&&I!=0){
        int parity=0;
        string Binary;
        while(I>0){
            if(I%2==1){
                Binary.push_back('1');
                parity++;
            }
            else{
                Binary.push_back('0');
            }
            I/=2;
        }
        reverse(Binary.begin(),Binary.end());
        cout<<"The parity of "<<Binary<<" is "<<parity<<" (mod 2).\n";
    }
    return 0;
}