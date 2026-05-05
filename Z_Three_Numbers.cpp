#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int k,s;
    cin>>k>>s;
    long long res=0;
    for(int x=0;x<=k;x++){
        int baaki=s-x;
        if(baaki>=0 && baaki<=2*k){
            if(baaki<=k)     res+=baaki+1;
            if(baaki>k)     res+=(2*k)-baaki+1;
        }
    }
    cout<<res;
}
