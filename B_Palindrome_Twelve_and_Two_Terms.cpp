#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        long long y=n%12;
        long long x;
        if(y<=9)        x=y;
        else if(y==10)  x=22;
        else            x=11;
        if(x>n) cout<<"-1\n";
        else    cout<<x<<" "<<n-x<<"\n";
    }
    return 0;
}