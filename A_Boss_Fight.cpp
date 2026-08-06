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
        map<int,int> cnt;
        int sum=0;
        int maxi=0,val=0;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            sum+=x;
            cnt[x]++;
            if(cnt[x]>maxi){
                maxi=cnt[x];
                val=x;
            }
        }
        int k=min(maxi,n-maxi+2);
        cout<<sum-(maxi-k)*val<<"\n";
    }

    return 0;
}