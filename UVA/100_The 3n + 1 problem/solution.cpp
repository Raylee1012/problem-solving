#include<iostream>
#include<iomanip>
using namespace std;
void getCycleLength(int n,int &cycle_length){
    cycle_length=1;
    while(n!=1){
        if(n%2==1){
            n=3*n+1;
        }
        else{
            n/=2;
        }
        cycle_length++;
    }
}
int main(){
    int i,j; 
    while (cin>>i>>j){
        int min_number=min(i,j);
        int max_number=max(i,j);
        int max_length=0;
        for(int k=min_number;k<=max_number;k++){
            int length=0;
            getCycleLength(k,length);
            max_length=max(max_length,length);
        }
        cout<<i<<" "<<j<<" "<<max_length<<'\n';
    }
    return 0;
}