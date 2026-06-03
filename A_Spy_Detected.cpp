#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n);
        map<int,int> mp;
        for(int i=0;i<n;i++){
            cin >> arr[i];
            mp[arr[i]]++;
        }
        int x;
        for(auto &p:mp){
            if(p.second==1){
                x=p.first;
                break;
            }
        }
        for(int i=0;i<n;i++){
            if(arr[i]==x){
                cout << i+1 << '\n';
                break;
            }
        }
    }
    return 0;
}