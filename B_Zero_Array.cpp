#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    long long sum=0,maxi=0;
    for(int i=0;i<n;i++){
        long long x;
        cin>>x;
        sum+=x;
        maxi=max(maxi,x);
    }
    if(sum%2==0 && maxi<=sum-maxi)  cout<<"YES";
    else                            cout<<"NO";
}