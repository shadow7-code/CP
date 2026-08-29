#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        long long cnt=0;
        while(n!=0){
            cnt++;
            n/=2;
        }
        cout<<(1LL<<(cnt-1))-1<<"\n";
    }

    return 0;
}