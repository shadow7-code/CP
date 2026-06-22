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
        vector<int> arr(n);
        for(int i=0;i<n;i++)    cin>>arr[i];
        vector<pair<int,int>> v;

        for(int i=0;i<n;i++){
            v.push_back({abs(arr[i]),i});
        }
        sort(v.begin(),v.end());
        bool flag=false;
        for(int i=0;i<=n/2;i++){
            if(v[i].second==0){
                flag=true;
                break;
            }
        }
        if(flag) cout<<"YES\n";
        else     cout<<"NO\n";
    }
    return 0;
}