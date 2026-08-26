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
        vector<long long> arr(n+1),pref(n+1);
        for(int i=1;i<=n;i++){
            cin>>arr[i];
            pref[i]=pref[i-1]+arr[i];
        }
        int l=1,r=n;
        while(l<r){
            int mid=(l+r)/2;
            cout<<"? "<<mid-l+1<<" ";
            for(int i=l;i<=mid;i++)    cout<<i<<" ";
            cout<<endl;
            cout.flush();
            long long x;
            cin>>x;
            long long expected=pref[mid]-pref[l-1];
            if(x==expected)    l=mid+1;
            else               r=mid;
        }
        cout<<"! "<<l<<endl;
        cout.flush();
    }
    return 0;
}