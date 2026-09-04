#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    double ax,ay,bx,by,cx,cy,dx,dy;
    while(cin>>ax>>ay>>bx>>by>>cx>>cy>>dx>>dy){
        double x,y;
        if(ax==cx&&ay==cy){
            x=bx+dx-ax;
            y=by+dy-ay;
        }
        else if(ax==dx&&ay==dy){
            x=bx+cx-ax;
            y=by+cy-ay;
        }
        else if(bx==cx&&by==cy){
            x=ax+dx-bx;
            y=ay+dy-by;
        }
        else{
            x=ax+cx-bx;
            y=ay+cy-by;
        }
        cout<<fixed<<setprecision(3)<<x<<" "<<y<<'\n';
    }
    return 0;
}