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
        vector<int> arr(26,0);
        for(int i=0;i<n;i++){
            string s;
            cin>>s;
            arr[s[0]-'a']=1;
        }
        bool flag=true;
        for(int i=0;i<m;i++){
            string s;
            cin>>s;
            for(int j=0;j<s.size();j++)    if(arr[s[j]-'A']==0)    flag=false;
        }
        if(flag)    cout<<"YES\n";
        else        cout<<"NO\n";
    }
    
    return 0;
}