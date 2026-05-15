#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<vector<int>>a(n,vector<int>(n));

        for(int i=0;i<n;i++){
            a[i][i]=1;
            a[i][n-i-1]=1;
        }
        if(n&1){
            a[n/2-1][n/2]=1;
            a[n/2][n/2+1]=1;
        }

        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout<<a[i][j]<<" ";
            }
            cout<<"\n";
        }
    }
}