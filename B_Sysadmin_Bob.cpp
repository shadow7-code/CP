#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin>>s;
    int n=s.size();
    vector<int> pos;
    for(int i=0;i<n;i++)    if(s[i]=='@')    pos.push_back(i);

    if(pos.empty() || pos[0]==0 || pos.back()==n-1){
        cout<<"No solution\n";
        return 0;
    }
    for(int i=0;i+1<pos.size();i++){
        if(pos[i+1]-pos[i]<3){
            cout<<"No solution\n";
            return 0;
        }
    }
    string res;
    int start=0;
    for(int i=0;i<pos.size();i++){
        int end;
        if(i==pos.size()-1)    end=n-1;
        else        end=pos[i]+1;
        if(i>0)    res+=",";
        res+=s.substr(start,end-start+1);
        start=end+1;
    }
    cout<<res<<"\n";

    return 0;
}