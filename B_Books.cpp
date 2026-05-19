#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    long long t;
    cin>>n>>t;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int l=0,res=0;
    long long sum=0;
    for(int r=0;r<n;r++){
        sum+=a[r];
        while(sum>t){
            sum-=a[l];
            l++;
        }
        res=max(res,r-l+1);
    }
    cout<<res;
    return 0;
}