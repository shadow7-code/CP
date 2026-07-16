#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++)    cin>>arr[i];
        if(n==1){
            cout<<0<<"\n";
            continue;
        }
        int res=n-1;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int cnt=0;
                for(int k=0;k<n;k++){
                    long long x=1LL*(arr[k]-arr[i])*(j-i);
                    long long y=1LL*(k-i)*(arr[j]-arr[i]);
                    if(x==y) cnt++;
                }
                res=min(res,n-cnt);
            }
        }
        cout<<res<<"\n";
    }
    return 0;
}