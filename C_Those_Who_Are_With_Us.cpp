#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--){
        int n,m; 
        cin>>n>>m;
        vector<vector<int>> arr(n,vector<int>(m));
        int maxi=0,cnt=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>arr[i][j];
                if(arr[i][j]>maxi){
                    maxi=arr[i][j];
                    cnt=1;
                }else if(arr[i][j]==maxi){
                    cnt++;
                }
            }
        }
        vector<int> row(n),col(m);
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(arr[i][j]==maxi){
                    row[i]++;
                    col[j]++;
                }
            }
        }
        bool possible=false;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                int covered=row[i]+col[j]-(arr[i][j]==maxi);
                if(covered==cnt){
                    possible=true;
                    break;
                }
            }
            if(possible) break;
        }
        cout<<maxi-(possible?1:0)<<"\n";
    }
}