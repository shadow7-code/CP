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
        vector<int> p(n+1),seen(n+1,0);
        for(int i=1;i<=n;i++){
            cin>>p[i];
        }
        int a=0,b=0,res=0;
        for(int i=1;i<=n;i++){
            seen[p[i]]=1;
            if(seen[i]){
                res=max(res,a+b);
                b--;
            }
            if(p[i]<=i){
                a++;
            }
            if(p[i]>i){
                b++;
            }
        }
        res=max(res,a);
        cout<<res<<"\n";
    }
    return 0;
}