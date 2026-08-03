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
        vector<int> arr(k+1),brr(n+1),res;
        for(int i=1;i<=k;i++)    cin>>arr[i];
        vector<vector<int>> pos(k+2);

        for(int i=1;i<=n;i++){
            cin>>brr[i];
            pos[brr[i]].push_back(i);
        }
        for(int i=k;i>=1;i--){
            for(int j=0;j<pos[i].size();j++){
                for(int l=i;l<=k;l++){
                    res.push_back(pos[i][j]);
                }
            }
        }
        cout<<res.size()<<"\n";
        for(int i=0;i<(int)res.size();i++)    cout<<res[i]<<" ";
        cout<<"\n";
    }
    return 0;
}