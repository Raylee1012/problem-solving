#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
int digitValue(char number){
    if(number>='0'&&number<='9'){
        return number-'0';
    }
    else if(number>='A'&&number<='Z'){
        return number-'A'+10;
    }
    else{
        return number-'a'+36;
    }
}
int main(){
    string text;
    while(cin>>text){
        int start=0;
        if(text[0]=='-'||text[0]=='+'){
            start=1;
        }
        int maxDigit=0;
        int sum=0;
        for(int i=start;i<(int)text.length();i++){
            int v=digitValue(text[i]);
            maxDigit=max(v,maxDigit);
            sum+=v;
        }
        int minN=maxDigit+1;
        if(minN<2){
            minN=2;
        }
        bool found=false;
        for(int N=minN;N<=62;N++){
            if(sum%(N-1)==0){
                cout<<N<<'\n';
                found=true;
                break;
            }
        }
        if(!found){
            cout<<"such number is impossible!\n";
        }
    }
    return 0;
}