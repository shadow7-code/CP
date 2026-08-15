#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s1,s2;
    cin>>s1>>s2;
    int n=s1.size();
    vector<int> pos[26];

    for(int i=0;i<n;i++)    pos[s1[i]-'a'].push_back(i);
    for(int i=0;i<s2.size();i++){
        if(pos[s2[i]-'a'].empty()){
            cout<<-1<<"\n";
            return 0;
        }
    }

    int res=1;
    int x=-1;
    for(int i=0;i<s2.size();i++){
        vector<int> &arr=pos[s2[i]-'a'];
        auto it=upper_bound(arr.begin(),arr.end(),x);
        if(it==arr.end()){
            res++;
            x=arr[0];
        }else{
            x=*it;
        }
    }
    cout<<res<<"\n";
    return 0;
}