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
        int odd=false,eve=false;
        vector<int>arr(n),brr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]%2==0)     eve=true;
            else                odd=true;
        }
        brr=arr;
        sort(brr.begin(),brr.end());
        if(odd && eve)    cout<<"YES\n";
        else{
            if(arr==brr)    cout<<"YES\n";
            else            cout<<"NO\n";
        }
    }
    return 0;
}