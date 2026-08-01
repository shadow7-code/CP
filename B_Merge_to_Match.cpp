#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<int> arr(n),brr(m);
        for(int i=0;i<n;i++)    cin>>arr[i];
        for(int i=0;i<m;i++)    cin>>brr[i];
        if(n<2*m){
            cout<<"NO\n";
            continue;
        }
        sort(arr.begin(),arr.end()),sort(brr.begin(),brr.end());
        bool flag=true;;
        for(int i=0;i<m;i++){
            if(arr[i]>=brr[i] || brr[i]>=arr[n-m+i]){
                flag=false;
                break;
            }
        }
        if(flag)    cout<<"YES\n";
        else        cout<<"NO\n";
    }

    return 0;
}