
#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        long long n,res=0;;
        cin>>n;
        vector<long long> arr(n);
        for(int i=0;i<n;i++)    cin>>arr[i];
        sort(arr.begin(),arr.end());
        for(int i=0;i<n;i++)    res+=abs(arr[i]-arr[n/2]);
        cout<<res<<" "<<(arr[n/2]-arr[0])+(arr[n-1]-arr[n/2])<<"\n";
    }

    return 0;
}
