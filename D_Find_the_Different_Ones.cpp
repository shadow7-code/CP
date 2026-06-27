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
        vector<int> arr(n),pref(n);
        for(int i=0;i<n;i++)    cin>>arr[i];
        
        pref[0]=-1;
        for(int i=1;i<n;i++){
            pref[i]=pref[i-1];
            if(arr[i]!=arr[i-1]){
                pref[i]=i-1;
            }
        }
        int q;
        cin>>q;
        while(q--){
            int l,r;
            cin>>l>>r;
            l--;
            r--;
            if(pref[r]<l)    cout<<"-1 -1\n";
            else             cout<<pref[r]+1<<" "<<r+1<<"\n";
        }
        cout<<"\n";
    }
    return 0;
}