#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n,k,m;
    cin>>n>>k>>m;
    vector<int> arr(n);
    map<int,vector<int>> cnt;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        cnt[arr[i]%m].push_back(arr[i]);
    }
    for(auto x:cnt){
        if(x.second.size()>=k){
            cout<<"Yes\n";
            for(int i=0;i<k;i++)    cout<<x.second[i]<<" ";
            cout<<"\n";
            return 0;
        }
    }
    cout<<"No\n";

    return 0;
}