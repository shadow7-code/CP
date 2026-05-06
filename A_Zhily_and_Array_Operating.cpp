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
        long long sum=0;
        int res=0;
        for(int i=n-1;i>=0;i--){
            sum+=arr[i];
            if(sum>0)   res++;
            else        sum=0;
        }
        cout<<res<<"\n";
    }
}