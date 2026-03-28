#include<bits/stdc++.h>
using namespace std;

long long divv(int n){
    if(n==0) return 1;
    long long res=1;
    for(int i=2;i*i<=n;i++){
        int cnt=0;
        while(n%i==0){
            cnt++;
            n/=i;
        }
        if(cnt>0){
            res*=(cnt+1);
        }
    }
    if(n>1) res*=2;
    return res;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    const int mod=676767677;
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        cout<<divv(abs(x-y))%mod<<"\n";
        vector<int> arr;
        if(x>=y){
            for(int i=0;i<x;i++) arr.push_back(1);
            for(int i=0;i<y;i++) arr.push_back(-1);
        }
        else{
            for(int i=0;i<y;i++) arr.push_back(-1);
            for(int i=0;i<x;i++) arr.push_back(1);
        }
        for(int i=0;i<arr.size();i++){
            cout<<arr[i];
            if(i!=arr.size()-1) cout<<" ";
        }
        cout<<"\n";
    }
    return 0;
}