#include<bits/stdc++.h>
using namespace std;

int sum(long long n){
    int res=0;
    while(n){
        res+=n%10;
        n/=10;
    }
    return res;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        long long n;
        int s;
        cin>>n>>s;

        if(sum(n)<=s){
            cout<<0<<"\n";
            continue;
        }
        long long res=0,p=1;
         while(sum(n)>s){
            p*=10;
            long long add=(p-n%p)%p;
            res+=add;
            n+=add;
        }
        cout<<res<<"\n";
    }
    return 0;
}