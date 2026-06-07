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
        vector<long long> arr(2*n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
            arr[i+n]=arr[i];
        }
        for(int x=0;x<n;x++){
            vector<long long> pref(n),suf(n);
            pref[0]=arr[x];
            for(int i=1;i<n;i++){
                pref[i]=max(pref[i-1],arr[x+i]);
            }
            suf[n-1]=arr[x+n-1];
            for(int i=n-2;i>=0;i--){
                suf[i]=max(suf[i+1],arr[x+i]);
            }
            long long res=0;
            for(int i=1;i<n;i++)    res+=min(pref[i-1],suf[i]);
            cout<<res;
            if(x+1<n) cout<<" ";
        }
        cout<<"\n";
    }
    return 0;
}