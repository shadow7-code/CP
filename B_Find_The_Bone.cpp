#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n,m,k;
    cin>>n>>m>>k;
    vector<int> hole(n+1,0);
    for(int i=0;i<m;i++){
        int x;
        cin>>x;
        hole[x]=1;
    }

    int res=1;
    if(hole[1]){
        cout<<1<<"\n";
        return 0;
    }
    for(int i=0;i<k;i++){
        int u,v;
        cin>>u>>v;
        if(!hole[res]){
            if(res==u)      res=v;
            else if(res==v) res=u;
        }
    }
    cout<<res<<"\n";
    return 0;
}