#include<iostream>
#include<vector>
using namespace std;
int main(){
    int x;
    while(cin>>x){
        vector<int>a;
        int num;
        while(cin>>num){
            a.push_back(num);
            if(cin.get()=='\n'){
                break;
            }
        }
        int n=(int)a.size()-1;
        long long result=0;
        for(int i=0;i<n;i++){
            result=result*x+a[i]*(long long)(n-i);
        }
        cout<<result<<'\n';
    }
    return 0;
}