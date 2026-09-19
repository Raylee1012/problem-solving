#include<iostream>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        int M,N,Q;
        cin>>M>>N>>Q;
        string grid[100];
        for(int i=0;i<M;i++){
            cin>>grid[i];
        }
        cout<<M<<' '<<N<<' '<<Q<<'\n';
        while(Q--){
            int r,c;
            cin>>r>>c;
            int ans=1;
            int half=0;
            while(true){
                half++;
                int top=r-half;
                int bottom=r+half;
                int left=c-half;
                int right=c+half;
                if(top<0||bottom>=M||left<0||right>=N){
                    break;
                }
                char ch=grid[r][c];
                bool same=true;
                for(int i=top;i<=bottom;i++){
                    for(int j=left;j<=right;j++){
                        if(grid[i][j]!=ch){
                            same=false;
                            break;
                        }
                    }
                    if(!same){
                        break;
                    }
                }
                if(!same){
                    break;
                }
                ans=half*2+1;
            }
            cout<<ans<<'\n';
        }
    }
    return 0;
}