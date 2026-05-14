#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<long long>arr(n+m);
        long long res=0;
        for(int i=0;i<n+m;i++){
            long long y;
            cin>>y;
            if(i==n+m-1)    res+=y;
            else          arr.push_back(y);
        }
        sort(arr.rbegin(),arr.rend());
        for(int i=0;i<n-1;i++)    res+=arr[i];
        cout<<res<<"\n";
    }
}