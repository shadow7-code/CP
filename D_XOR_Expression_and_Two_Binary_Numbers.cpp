#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string s,z;
        cin>>s>>z;
        long long xA=0,yA=0;
        long long xB=0,yB=0;
        long long xC=0,yC=0;
        for(int i=0;i<n;i++){
            if(s[i]=='1')   xA++;
            else            yA++;
            if(z[i]=='1')   xB++;
            else            yB++;
            if(s[i]!=z[i])  xC++;
            else            yC++;
        }

        long long vA=xA*yA;
        long long vB=xB*yB;
        long long vC=xC*yC;
        long long p=1LL<<k;
        long long cA,cB,cC;
        if(k%2==0)  cA=(p+2)/3;
        else        cA=(p+1)/3;
        cB=cA;
        cC=p+1-cA-cB;
        long long res=cA*vA+cB*vB+cC*vC;
        cout<<res<<"\n";
    }

    return 0;
}