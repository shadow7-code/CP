#include<bits/stdc++.h>
using namespace std;

bool helper(int x,int n,vector<int> &l,vector<int> &r,vector<int> &u,vector<int> &v){
    int curr=1;
    for(int i=1;i<=x;i++){
        while(curr<=n){
            int lr=i,rr=x-i+1;
            if((lr<l[curr]||lr>r[curr]) && (rr<u[curr]||rr>v[curr]))    break;
            curr++;
        }
        if(curr>n)    return false;
        curr++;
    }
    return true;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> l(n+1),r(n+1),u(n+1),v(n+1);
        for(int i=1;i<=n;i++)    cin>>l[i]>>r[i]>>u[i]>>v[i];
        int res=0;
        for(int i=n;i>=1;i--){
            if(helper(i,n,l,r,u,v)){
                res=i;
                break;
            }
        }
        cout<<res<<"\n";
    }
    return 0;
}