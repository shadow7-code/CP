#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    vector<long long>a(n);
    for(int i=0;i<n;i++)    cin>>a[i];

    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        a[i]-=x;
    }
    sort(a.begin(),a.end());

    long long res=0;
    int l=0,r=n-1;
    while(l<r){
        if(a[l]+a[r]>0){
            res+=r-l;
            r--;
        }
        else{
            l++;
        }
    }
    cout<<res;
    return 0;
}