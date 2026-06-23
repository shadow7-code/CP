#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<vector<int>> pos(k+1);
        for(int i=1;i<=n;i++){
            int x;
            cin>>x;
            pos[x].push_back(i);
        }
        vector<int> res(k+1,0);
        int l=INT_MAX,r=INT_MIN;
        for(int i=k;i>=1;i--){
            for(int j=0;j<pos[i].size();j++){
                l=min(l,pos[i][j]);
                r=max(r,pos[i][j]);
            }
            if(!pos[i].empty())    res[i]=2*(r-l+1);
        }
        for(int i=1;i<=k;i++)    cout<<res[i]<<" ";
        cout<<"\n";
    }
    return 0;
}