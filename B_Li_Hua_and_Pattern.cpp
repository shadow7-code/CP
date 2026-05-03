#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int n;
        long long k;
        cin>>n>>k;
        vector<vector<int>> mat(n,vector<int>(n));
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin>>mat[i][j];
            }
        }
        int need=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                int x=n-1-i,y=n-1-j;
                if(i>x||(i==x&&j>=y))       continue;   //  n/=2 if not using this line
                if(mat[i][j]!=mat[x][y])    need++;
            }
        }

        if(need>k)               cout<<"NO\n";
        else{
            if(n&1)              cout<<"YES\n";
            else if((k-need)&1)  cout<<"NO\n";
            else                 cout<<"YES\n";
        }
    }
    return 0;
}