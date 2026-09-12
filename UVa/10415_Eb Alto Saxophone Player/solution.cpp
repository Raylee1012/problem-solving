#include<iostream>
#include<string>
using namespace std;
bool note_fingers[14][10]={
   //  1       2      3      4      5      6       7      8      9      10
    { false,  true,  true,  true,  false, false,  true,  true,  true,  true },  //c
    { false,  true,  true,  true,  false, false,  true,  true,  true, false },  //d
    { false,  true,  true,  true,  false, false,  true,  true, false, false },  //e
    { false,  true,  true,  true,  false, false,  true, false, false, false },  //f
    { false,  true,  true,  true,  false, false, false, false, false, false },  //g
    { false,  true,  true, false,  false, false, false, false, false, false },  //a
    { false,  true, false, false,  false, false, false, false, false, false },  //b
    { false, false,  true, false,  false, false, false, false, false, false },  //C
    {  true,  true,  true,  true,  false, false,  true,  true,  true, false },  //D
    {  true,  true,  true,  true,  false, false,  true,  true, false, false },  //E
    {  true,  true,  true,  true,  false, false,  true, false, false, false },  //F
    {  true,  true,  true,  true,  false, false, false, false, false, false },  //G
    {  true,  true,  true, false,  false, false, false, false, false, false },  //A
    {  true,  true, false, false,  false, false, false, false, false, false },  //B
};
int note_index(char c){
    string notes="cdefgabCDEFGAB";
    for(int i=0;i<14;i++){
        if(notes[i]==c){
            return i;
        }
    }
    return -1;
}
int main(){
    int T;
    cin>>T;
    cin.ignore();
    while (T--){
        string song;
        getline(cin,song);
        int press[10]={0};
        bool last[10]={false};
        for(int i=0;i<(int)song.size();i++){
            int idx=note_index(song[i]);
            for(int j=0;j<10;j++){
                if(note_fingers[idx][j]&&!last[j]){
                    press[j]++;
                }
            }
            for(int j=0;j<10;j++){
                last[j]=note_fingers[idx][j];
            }
        }
        for(int i=0;i<10;i++){
            cout<<press[i];
            if(i<9){
                cout<<' ';
            }
        }
        cout<<'\n';
    }
    return 0;
}