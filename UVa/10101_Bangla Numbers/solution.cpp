#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    long long n;
    int caseNum=1;
    while(cin>>n){
        cout<<setw(4)<<caseNum<<". ";
        caseNum++;
        if(n==0){
            cout<<"0\n";
            continue;
        }
        long long kuti=n/10000000;
        long long rest=n%10000000;
        bool first=true;
        if(kuti>0){
            if(kuti>=10000000){
                if(!first){
                    cout<<" ";
                }
                cout<<kuti/10000000<<" kuti";
                kuti%=10000000;
                first=false;
            }
            if(kuti>=100000){
                if(!first){
                    cout<<" ";
                }
                cout<<kuti/100000<<" lakh";
                kuti%=100000;
                first=false;
            }
            if(kuti>=1000){
                if(!first){
                    cout<<" ";
                }
                cout<<kuti/1000<<" hajar";
                kuti%=1000;
                first=false;
            }
            if(kuti>=100){
                if(!first){
                    cout<<" ";
                }
                cout<<kuti/100<<" shata";
                kuti%=100;
                first=false;
            }
            if(kuti>0){
                if(!first){
                    cout<<" ";
                }
                cout<<kuti<<" kuti";
            }
            else{
                if(!first){
                    cout<<" ";
                }
                cout<<"kuti";
            }
            first=false;
        }
        if(rest>=100000){
            if(!first){
                cout<<" ";
            }
            cout<<rest/100000<<" lakh";
            rest%=100000;
            first=false;
        }
        if(rest>=1000){
            if(!first){
                cout<<" ";
            }
            cout<<rest/1000<<" hajar";
            rest%=1000;
            first=false;
        }
        if(rest>=100){
            if(!first){
                cout<<" ";
            }
            cout<<rest/100<<" shata";
            rest%=100;
            first=false;
        }
        if(rest>0){
            if(!first){
                cout<<" ";
            }
            cout<<rest;
        }
        cout<<'\n';
    }
    return 0;
}