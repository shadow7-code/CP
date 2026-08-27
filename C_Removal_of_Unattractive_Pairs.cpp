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
        string s;
        cin>>s;
        vector<int> arr(26,0);
        for(int i=0;i<n;i++)    arr[s[i]-'a']++;
        int mx=0;
        for(int i=0;i<26;i++)    mx=max(mx,arr[i]);
        int res=max(n%2,2*mx-n);
        cout<<res<<"\n";
    }
    return 0;
}