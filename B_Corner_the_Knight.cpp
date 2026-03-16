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
        
        long long befc = (n - 1) / 2;
        long long d = (2 * n - 2) / 3;
        long long res = (befc + 1) * (befc + 2) / 2;
        if(d > befc){
            long long cnt = d - befc;
            long long p1 = (2 * n - 1 - 3 * befc) * cnt;
            long long p2 = 3 * cnt * (cnt + 1) / 2;
            res += (p1 - p2);
        }
        cout<<res<<"\n";
    }
    return 0;
}