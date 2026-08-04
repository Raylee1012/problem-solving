#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        int r;
        cin>>r;
        int streets[500];
        for(int i=0;i<r;i++){
            cin>>streets[i];
        }
        sort(streets,streets+r);
        int mid=streets[r/2];
        int total=0;
        for(int i=0;i<r;i++){
            int distance=streets[i]-mid;
            if(distance<0){
                distance=-distance;
            }
            total+=distance;
        }
        cout<<total<<"\n";
    }
    return 0;
}