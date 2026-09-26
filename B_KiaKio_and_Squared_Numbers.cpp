#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> freq(730,0);
        for(int i=0;i<n;i++){
            long long x;
            cin>>x;
            for(int j=0;j<16;j++){
                long long abx=0;
                while(x>0){
                    long long d=x%10;
                    abx+=d*d;
                    x/=10;
                }
                x=abx;
            }
            freq[x]++;
        }
        long long res=0;
        for(auto i:freq)    res+=1LL*i*(i-1)/2;
        cout<<res<<"\n";
    }
    return 0;
}