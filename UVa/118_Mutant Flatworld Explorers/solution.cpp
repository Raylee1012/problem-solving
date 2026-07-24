#include<iostream>
#include<string>
using namespace std;
int main(){
    int maxX,maxY;
    cin>>maxX>>maxY;
    bool scent[51][51]={false};
    int x,y;
    char dir;
    string instructions;
    while(cin>>x>>y>>dir){
        cin>>instructions;
        bool lost=false;
        for(int i=0;i<(int)instructions.length();i++){
            char cmd=instructions[i];
            if(cmd=='L'){
                if(dir=='N'){
                    dir='W';
                }
                else if(dir=='W'){
                    dir='S';
                }
                else if(dir=='S'){
                    dir='E';
                }
                else if(dir=='E'){
                    dir='N';
                }
            }
            else if(cmd=='R'){
                if(dir=='N'){
                    dir='E';
                }
                else if(dir=='E'){
                    dir='S';
                }
                else if(dir=='S'){
                    dir='W';
                }
                else if(dir=='W'){
                    dir='N';
                }
            }
            else if(cmd=='F'){
                int newX=x;
                int newY=y;
                if(dir=='N'){
                    newY=y+1;
                }
                else if(dir=='W'){
                    newX=x-1;
                }
                else if(dir=='S'){
                    newY=y-1;
                }
                else if(dir=='E'){
                    newX=x+1;
                }
                if(newX<0||newX>maxX||newY<0||newY>maxY){
                    if(scent[x][y]){
                        continue;
                    }
                    else{
                        scent[x][y]=true;
                        lost=true;
                        break;
                    }
                }
                x=newX;
                y=newY;
            }
        }
        cout<<x<<" "<<y<<" "<<dir;
        if(lost){
            cout<<" LOST";
        }
        cout<<'\n';
    }
    return 0;
}