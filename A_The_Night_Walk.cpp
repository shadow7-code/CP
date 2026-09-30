#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int n;
        long long l,d;
        cin>>n>>l>>d;
        vector<long long> arr(n);
        for(int i=0;i<n;i++)    cin>>arr[i];
        long long rounds=d/(2*l),rem=d%(2*l);
        long long res=rounds*2*n;
        for(int i=0;i<n;i++){
            if(arr[i]<=rem)                 res++;
            if(rem>l && 2*l-arr[i]<=rem)    res++;
        }
        cout<<res<<"\n";
    }
    return 0;
}