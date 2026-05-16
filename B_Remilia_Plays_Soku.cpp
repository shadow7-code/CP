#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        long long n,x1,x2,k;
        cin>>n>>x1>>x2>>k;
        long long d=min(abs(x1-x2),n-abs(x1-x2));
        if(n<=3)    cout<<d<<"\n";
        else        cout<<d+k<<"\n";
    }
    return 0;
}