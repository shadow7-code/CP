#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        long long a,b;
        cin>>a>>b;
        cout<<(b%a ? lcm(a,b) : b*(b/a))<<"\n";
    }
}