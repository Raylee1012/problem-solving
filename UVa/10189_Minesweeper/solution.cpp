#include<iostream>
#include<string>
using namespace std;
int main(){
    int n,m;
    int caseNum=1;
    bool first=true;
    while(cin>>n>>m&&(n||m)){
        string grid[100];
        for(int i=0;i<n;i++){
            cin>>grid[i];
        }
        if(!first){
            cout<<'\n';
        }
        first=false;
        cout<<"Field #"<<caseNum<<":\n";
        caseNum++;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]=='*'){
                    cout<<'*';
                }
                else{
                    int count=0;
                    for(int di=-1;di<=1;di++){
                        for(int dj=-1;dj<=1;dj++){
                            int ni=i+di;
                            int nj=j+dj;
                            if(ni>=0&&ni<n&&nj>=0&&nj<m){
                                if(grid[ni][nj]=='*'){
                                    count++;
                                }
                            }
                        }
                    }
                    cout<<count;
                }
            }
            cout<<'\n';
        }
    }
    return 0;
}