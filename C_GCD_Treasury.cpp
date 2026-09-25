#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int maxi=300000;
    vector<int> spf(maxi+1);
    for(int i=0;i<=maxi;i++)    spf[i]=i;
    for(int i=2;i*i<=maxi;i++){
        if(spf[i]==i){
            for(int j=i*i;j<=maxi;j+=i){
                if(spf[j]==j){
                    spf[j]=i;
                }
            }
        }
    }

    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        vector<int> arr(n),p;
        for(int i=0;i<n;i++)    cin>>arr[i];
        long long res=0;
        while(x>1){
            int y=spf[x];
            p.push_back(y);
            while(x%y==0)    x/=y;
        }
        for(int i=0;i<p.size();i++){
            long long sum=0;
            for(int j=0;j<n;j++)    if(arr[j]%p[i]==0)    sum+=arr[j];
            res=max(res,sum);
        }
        cout<<res<<"\n";
    }

    return 0;
}