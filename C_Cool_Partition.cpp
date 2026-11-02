#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t; 
    while(t--){ 
        int n,res=0;
        cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++)    cin>>arr[i];
        set<int> cur,seen;
        for(int i=0; i<n; i++){
            cur.insert(arr[i]);
            seen.insert(arr[i]);
            if(cur.size()==seen.size()){
                res++;
                seen.clear();
            }
        }
        cout<<res<<'\n';
    } 
    return 0;
}