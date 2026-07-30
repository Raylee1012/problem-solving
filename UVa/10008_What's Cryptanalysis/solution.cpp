#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    cin.ignore();
    int count[26]={0};
    for(int i=0;i<n;i++){
        string line;
        getline(cin,line);
        for(int j=0;j<(int)line.length();j++){
            if(line[j]>='A'&&line[j]<='Z'){
                count[line[j]-'A']++;
            }
            else if(line[j]>='a'&&line[j]<='z'){
                count[line[j]-'a']++;
            }
        }
    }
    char letters[26];
    for(int i=0;i<26;i++){
        letters[i] = 'A' + i;
    }
    for(int i=0;i<25;i++){
        for(int j=i+1;j<26;j++){
            if(count[i]<count[j]||(count[i]==count[j]&&letters[i]>letters[j])){
                swap(count[i],count[j]);
                swap(letters[i],letters[j]);
            }
        }
    }
    for(int i=0;i<26;i++){
        if(count[i]!=0){
            cout<<letters[i]<<" "<<count[i]<<'\n';
        }
    }
    return 0;
}