#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t; 
    while(t--){ 
        int n, k;
        cin>>n>>k;
        if(n==1){
            if(k==1){
                cout<<"YES\n";
                cout<<0<<"\n";
            }
            else    cout<<"NO\n";
            continue;
        }
        int x=k^n;
        int a=0,b=0;
        if(x>0)      a=32-__builtin_clz(x);
        if(n-1>0)    b=32-__builtin_clz(n-1);
        if(a>b){
            cout<<"NO\n";
            continue;
        }
        vector<int> res,arr(n, 0);
        if(x>0 && x<=n-1){
            res.push_back(x);
            arr[x]=1;
        }
        else if(x>n-1){
            res.push_back(n-1);
            arr[n-1]=1;
            int y=(n-1)^x;
            res.push_back(y);
            arr[y]=1;
        }
        res.push_back(0);
        arr[0]=1;
        for(int i=0;i<n;i++){
            if(arr[i]==0){
                res.push_back(i);
            }
        }
        reverse(res.begin(), res.end());
        cout<<"YES\n";
        for(int i=0;i<n;i++){
            cout<<res[i];
            if(i<n-1){
                cout<<" ";
            }
        }
        cout<<"\n";
    } 
    return 0;
}