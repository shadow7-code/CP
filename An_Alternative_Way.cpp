#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<long long> arr(n),brr(n);
        for(int i=0;i<n;i++)    cin>>arr[i];
        for(int i=0;i<n;i++)    cin>>brr[i];

        long long sum=0;
        bool flag=true;
        for(int i=0;i<n;i++){
            sum+=brr[i]-arr[i];
            if(sum<0)    flag=false;
        }
        if(flag)    cout<<"YES\n";
        else        cout<<"NO\n";
    }
    return 0;
}