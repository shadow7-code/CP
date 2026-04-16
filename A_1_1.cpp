#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        string s;cin>>s;

        vector<int> o;
        for(int i=0;i<n;i++) if(s[i]=='1') o.push_back(i);

        if(o.empty()){
            cout<<"0 0\n";
            continue;
        }

        int mn=0,mx=0;
        int start=o[0],prev=o[0];

        for(int i=1;i<o.size();i++){
            if(o[i]-prev>2){
                int k=prev-start+1;
                mx+=k;
                mn+=k/2+1;
                start=o[i];
            }
            prev=o[i];
        }

        int k=prev-start+1;
        mx+=k;
        mn+=k/2+1;

        cout<<mn<<" "<<mx<<"\n";
    }
}