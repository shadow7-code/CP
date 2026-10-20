#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t; 
    while(t--){ 
        int n,m,x=0,y=0;
        cin>>n>>m;
        string s;
        cin>>s;
        vector<vector<long long>> arr(n,vector<long long>(m));
        for(int i=0;i<n;i++)    for(int j=0;j<m;j++)    cin>>arr[i][j];
        for(int k=0;k<s.length();k++){
            char c=s[k];
            if(c=='D'){
                long long sum=0;
                for(int j=0;j<m;j++)    sum+=arr[x][j];
                arr[x][y]=-sum;
                x++;
            }else{
                long long sum=0;
                for(int i=0;i<n;i++)    sum+=arr[i][y];
                arr[x][y]=-sum;
                y++;
            }
        }

        long long sum=0;
        for(int j=0;j<m;j++)    sum+=arr[n-1][j];
        arr[n-1][m-1]=-sum;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++)    cout<<arr[i][j]<<" ";
            cout<<"\n";
        }
    } 
    return 0;
}