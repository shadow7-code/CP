#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n,m,res=INT_MAX;
    cin>>n>>m;
    vector<int> a(n+1);
    for(int i=1;i<=n;i++)    cin>>a[i];
    vector<vector<int>> arr(n+1),brr(n+1,vector<int>(n+1,0));

    for(int i=0;i<m;i++){
        int x,y;
        cin>>x>>y;
        arr[x].push_back(y),arr[y].push_back(x);
        brr[x][y]=1,brr[y][x]=1;
    }
    for(int i=1;i<=n;i++){
        for(int j=0;j<arr[i].size();j++){
            int x=arr[i][j];
            for(int k=j+1;k<arr[i].size();k++){
                int y=arr[i][k];
                if(brr[x][y]){
                    int sum=a[i]+a[x]+a[y];
                    res=min(res,sum);
                }
            }
        }
    }

    if(res==INT_MAX)    cout<<-1<<"\n";
    else                cout<<res<<"\n";
    return 0;
}
