#include <bits/stdc++.h>
using namespace std;

long long solve(long long n){
    if(n<=0)    return 0;
    long long res=(n/210)*48;
    int rem=n%210;
    for(int i=1;i<=rem;i++)    if(i%2 && i%3 && i%5 && i%7)   res++;     
    return res;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        long long l,r;
        cin>>l>>r;
        cout<<solve(r)-solve(l-1)<<"\n";
    }
}