#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        string a,b;
        cin>>a>>b;

        for(int i=0;i<m;i++){
            int x=a.find(b[i]);
            if(x!=-1)    a.erase(x,1);
        }
        sort(a.begin(),a.end());
        string c="isx";
        if(a==c && n-m==3)    cout<<"YES\n";
        else        cout<<"NO\n";
    }
    return 0;
}