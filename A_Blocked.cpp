#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int>a(n);
        set<int>s;
        bool dup=false;

        for(int i=0;i<n;i++){
            cin>>a[i];
            if(s.count(a[i])) dup=true;
            s.insert(a[i]);
        }

        if(dup){
            cout<<"-1\n";
            continue;
        }
        sort(a.rbegin(),a.rend());

        for(int i=0;i<n;i++){
            cout<<a[i]<<(i==n-1?"":" ");
        }
        cout<<"\n";
    }
}