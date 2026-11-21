#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int x,res=INT_MAX;
        cin>>x;
        for(int i=1;i<=x+1;i++){
            int maxi=0;
            for(int c=0;c<=i;c++){
                int a=i-c,curr=0,powa=c+1;
                for(int j=0;j<a;j++){
                    curr+=powa;
                    if(powa>1)    powa--;
                }
                maxi=max(maxi,curr);
            }
            if(maxi>=x){
                res=i;
                break;
            }
        }
        cout<<res<<"\n";
    }
    return 0;
}