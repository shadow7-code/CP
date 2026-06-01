#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    vector<pair<string,int>> hist;
    map<string,int> final;
    for(int i=0;i<n;i++){
        string name;
        int sc;
        cin>>name>>sc;
        hist.push_back({name,sc});
        final[name]+=sc;
    }
    int maxi=INT_MIN;
    for(auto &p:final)    maxi=max(maxi,p.second);

    map<string,int> curr;
    for(auto &p:hist){
        string name=p.first;
        int sc=p.second;
        curr[name]+=sc;
        if(final[name]==maxi && curr[name]>=maxi){
            cout<<name<<"\n";
            return 0;
        }
    }
    return 0;
}