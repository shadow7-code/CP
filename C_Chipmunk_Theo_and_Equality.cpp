#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        vector<long long> v(n);

        for(int i=0;i<n;i++)    cin >> v[i];
        sort(v.begin(),v.end());
        if(v[0]==v.back()){
            cout << 0 << '\n';
            continue;
        }

        unordered_map<long long,long long> can,need;
        long long res=1e18;
        for(auto x:v){
            long long step=0;
            if(x==1){
                can[1]++;
                can[2]++;

                need[2]+=1;
            }
            else{
                can[x]++;
                while(x!=1){
                    step++;
                    if(x&1)     x++;
                    else        x/=2;
                    can[x]++;
                    need[x]+=step;
                }
            }
        }
        for(auto &[k,v]:can){
            if(v==n){
                res=min(res,need[k]);
            }
        }
        cout << res << '\n';
    }
    return 0;
}