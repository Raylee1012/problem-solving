#include<iostream>
using namespace std;
int main(){
    int n;
    while(cin>>n){
        int arr[3000];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        if(n==1){
            cout<<"Jolly\n";
            continue;
        }
        bool appeared[3000]={false};
        bool isJolly=true;
        for(int i=0;i<n-1;i++){
            int diff=arr[i+1]-arr[i];
            if(diff<0){
                diff=-diff;
            }
            if(diff<1||diff>=n){
                isJolly=false;
                break;
            }
            if(appeared[diff]){
                isJolly=false;
                break;
            }
            appeared[diff]=true;
        }
        if(isJolly){
            cout<<"Jolly\n";
        }
        else{
            cout<<"Not jolly\n";
        }
    }
    return 0;
}