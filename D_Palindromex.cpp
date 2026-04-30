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

        int m=2*n;
        vector<int>a(m),z;

        for(int i=0;i<m;i++){
            cin>>a[i];
            if(a[i]==0) z.push_back(i);
        }

        int res=1;
        int c[3]={2*z[0],2*z[1],z[0]+z[1]};

        for(int k=0;k<3;k++){
            int l=c[k]/2;
            int r=(c[k]+1)/2;

            while(l>=0&&r<m&&a[l]==a[r]){
                l--;
                r++;
            }

            l++;
            r--;

            if(l<=r){
                vector<int> vis(n+1,0);

                for(int i=l;i<=r;i++){
                    if(a[i]<=n) vis[a[i]]=1;
                }

                int mex=0;
                while(mex<=n&&vis[mex]) mex++;

                res=max(res,mex);
            }
        }

        cout<<res<<"\n";
    }

    return 0;
}