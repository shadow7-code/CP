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
        if(k>2*n-1 || k<n){
            cout<<"-1\n";
            continue;
        }
        int m=2*n-k,cnt=1;
        vector<vector<int>> mat(n,vector<int>(n,0));
        for(int i=0;i<m;i++)    mat[i][i]=cnt++;
        for(int i=m;i<n;i++)    mat[i][0]=cnt++;
        for(int j=m;j<n;j++)    mat[0][j]=cnt++;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(mat[i][j]==0)    mat[i][j]=cnt++;
                cout<<mat[i][j]<<" ";
            }
            cout<<"\n";
        }
    } 
    return 0;
}