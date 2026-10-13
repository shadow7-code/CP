#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin>>n;
    vector<int> arr(n);
    map<int,int> cnt;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        cnt[arr[i]]++;
    }
    long long res=0;
    for(int i=0;i<n;i++){
        cnt[arr[i]]--;
        for(int j=0;j<=30;j++){
            long long x=(1LL<<j)-arr[i];
            if(cnt.count(x))    res+=cnt[x];
        }
    }
    cout<<res<<"\n";
}