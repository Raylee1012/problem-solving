#define _USE_MATH_DEFINES
#include<iostream>
#include<string>
#include<iomanip>
#include<cmath>
using namespace std;
int main(){
    const double r=6440.0;
    double s,a;
    string unit;
    while(cin>>s>>a>>unit){
        if(unit=="min"){
            a/=60.0;
        }
        while(a>360){
            a-=360;
        }
        if(a>180){
            a=360-a;
        }
        double R=r+s;
        double rad=a*M_PI/180.0;
        double arc=R*rad;
        double chord=2*R*sin(rad/2);
        cout<<fixed<<setprecision(6)<<arc<<' '<<chord<<'\n';
    }
    return 0;
}