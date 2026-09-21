#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int case_total;
    cin>>case_total;
    for(int i=1;i<=case_total;i++){
        int cost[36];
        for(int i=0;i<36;i++){
            cin>>cost[i];
        }
        int query_total;
        cin>>query_total;
        if(i>1){
            cout<<'\n';
        }
        cout<<"Case "<<i<<":\n";
        while(query_total--){
            long long query_num;
            cin>>query_num;
            long long min_cost=-1;
            long long costs[37];
            for(int b=2;b<=36;b++){
                long long total=0;
                if(query_num==0){
                    total=cost[0];
                }
                else{
                    long long temp=query_num;
                    while(temp>0){
                        int remainder=temp%b;
                        total+=cost[remainder];
                        temp/=b;
                    }
                }
                costs[b]=total;
                if(b==2){
                    min_cost=total;
                }
                else{
                    min_cost=min(min_cost,total);
                }
            }
            cout<<"Cheapest base(s) for number "<<query_num<<':';
            for(int b=2;b<=36;b++){
                if(costs[b]==min_cost){
                    cout<<' '<<b;
                }
            }
            cout<<'\n';
        }
    }
    return 0;
}