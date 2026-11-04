#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int l,r;
        cin>>l>>r;
        int res=r-l;
        for(int i=l;i<=r;i++){
            for(int j=i;j<=r;j++){
                int sum=(i+j)*(j-i+1)/2;
                if(sum>=i && sum<=j)    res=min(res,(i-l)+(r-j));
            }
        }
        cout<<res<<"\n";
    }
        return 0;
}