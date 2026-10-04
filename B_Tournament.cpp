#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    int m=n*(n-1)/2-1;
    vector<int> cnt(n+1,0);
    vector<int> brr(n+1,0);
    vector<pair<int,int>> arr;
    for(int i=0;i<m;i++){
        int x,y;
        cin>>x>>y;
        arr.push_back({x,y});
        cnt[x]++;
        cnt[y]++;
        brr[x]++;
    }
    int a=-1,b=-1;
    for(int i=1;i<=n;i++){
        if(cnt[i]==n-2){
            if(a==-1)    a=i;
            else         b=i;
        }
    }
    vector<int> suf=brr,pref(n,0);
    suf[a]++;
    bool flag=true;
    for(int i=1;i<=n;i++)    if(suf[i]>=0 && suf[i]<n)    pref[suf[i]]++;
    for(int i=0;i<n;i++)    if(pref[i]!=1)    flag=false;
    if(flag)    cout<<a<<" "<<b<<"\n";
    else        cout<<b<<" "<<a<<"\n";
    return 0;
}