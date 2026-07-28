#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int N;
    cin>>N;
    while(N--){
        int L;
        cin>>L;
        int arr[L];
        for(int i=0;i<L;i++){
            cin>>arr[i];
        }
        int count=0;
        for(int i=0;i<L-1;i++){
            for(int j=i+1;j<L;j++){
                if(arr[i]>arr[j]){
                    swap(arr[i],arr[j]);
                    count++;
                }
            }
        }
        cout<<"Optimal train swapping takes "<<count<<" swaps.\n";
    }
    return 0;
}