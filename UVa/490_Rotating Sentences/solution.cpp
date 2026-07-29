#include<iostream>
#include<string>
#include<vector>
#include<iomanip>
using namespace std;
int main(){
    vector<string>sentences;
    string line;
    int maxLen=0;
    while(getline(cin,line)){
        sentences.push_back(line);
        maxLen=max((int)line.length(),maxLen);
    }
    for(int i=0;i<maxLen;i++){
        for(int j=(int)sentences.size()-1;j>=0;j--){
            if(i<sentences[j].length()){
                cout<<sentences[j][i];
            }
            else{
                cout<<' ';
            }
        }
        cout<<'\n';
    }
    return 0;
}