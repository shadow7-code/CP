#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    vector<pair<int,int>> arr(n);
    map<int,int> mp;

    for(int i=0;i<n;i++){
        cin>>arr[i].first>>arr[i].second;
        mp[arr[i].first]=arr[i].second;
    }
    for(int i=0;i<n;i++){
        int x=arr[i].first;
        int d=arr[i].second;

        if(mp.count(x+d)){
            if((x+d)+mp[x+d]==x){
                cout<<"YES\n";
                return 0;
            }
        }
    }
    cout<<"NO\n";
    return 0;
}