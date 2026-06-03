#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        long long hC,dC,hM,dM;
        cin >> hC >> dC;
        cin >> hM >> dM;
        long long k,w,a;
        cin >> k >> w >> a;

        bool flag=false;
        for(long long i=0;i<=k;i++){
            long long dc=dC+i*w;
            long long hc=hC+(k-i)*a;
            long long chara=(hM+dc-1)/dc;
            long long monster=(hc+dM-1)/dM;
            if(chara<=monster){
                flag=true;
                break;
            }
        }
        cout << (flag ? "YES" : "NO") << '\n';
    }
    return 0;
}