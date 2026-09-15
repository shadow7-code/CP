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
        vector<long long> arr(n+1);
        for(int i=1;i<=n;i++) cin>>arr[i];
        vector<vector<long long>> mat(n+1,vector<long long>(m));
        for(int i=1;i<=n;i++){
            for(int j=0;j<m;j++){
                cin>>mat[i][j];
            }
        }
        int res=m;
        vector<long long> best;
        for(int k=n;k>=1;k--){
            for(int j=0;j<m;j++){
                best.push_back(mat[k][j]);
            }
            sort(best.rbegin(),best.rend());
            if(best.size()>m)    best.resize(m);
            long long sum=0;
            for(int i=0;i<(int)best.size();i++){
                sum+=best[i];
                if(sum>=arr[k]){
                    res=min(res,i+1);
                    break;
                }
            }
        }
        cout<<res<<"\n";
    }
    return 0;
}