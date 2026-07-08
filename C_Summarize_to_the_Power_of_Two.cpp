#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    vector<long long> arr(n);
    unordered_map<long long,int> cnt;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        cnt[arr[i]]++;
    }

    int res=0;
    for(int i=0;i<n;i++){
        bool flag=false;
        for(int j=0;j<=31;j++){
            long long sum=(1LL<<j);
            long long x=sum-arr[i];
            if(cnt.find(x)==cnt.end()) continue;
            if(x!=arr[i] || cnt[x]>=2){
                flag=true;
                break;
            }
        }
        if(!flag) res++;
    }
    cout<<res<<"\n";
    return 0;
}