#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long n,a;
    long long maxi=INT_MAX;
    cin>>n;
    for(long long i=0;i<n;i++){
        cin>>a;
        maxi=min(maxi,a/max(i,n-1-i));
    }
    cout<<maxi;
    return 0;
}