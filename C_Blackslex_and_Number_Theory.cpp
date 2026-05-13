#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        vector<long long>arr(n);
        for(int i=0;i<n;i++)    cin>>arr[i];
        sort(arr.begin(),arr.end());
        cout<<max(arr[0],arr[1]-arr[0])<<"\n";
    }
}