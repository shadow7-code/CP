#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    while(t--){
        int n,m;
        cin>>n>>m;

        vector<long long>odd,eve;
        long long sum=0,x;

        for(int i=1;i<=n;i++){
            cin>>x;
            sum+=x;
            if(i&1) odd.push_back(x);
            else    eve.push_back(x);
        }

        int cnt_odd=0,cnt_eve=0,xx;
        while(m--){
            cin>>xx;
            if(xx&1) cnt_odd++;
            else     cnt_eve++;
        }

        cnt_odd=min(cnt_odd,(int)odd.size());
        cnt_eve=min(cnt_eve,(int)eve.size());

        sort(odd.rbegin(),odd.rend());
        sort(eve.rbegin(),eve.rend());

        long long mark=0;

        if(cnt_odd>0){
            mark+=odd[0];
            for(int i=1;i<cnt_odd;i++){
                if(odd[i]>0) mark+=odd[i];
            }
        }

        if(cnt_eve>0){
            mark+=eve[0];
            for(int i=1;i<cnt_eve;i++){
                if(eve[i]>0) mark+=eve[i];
            }
        }
        cout<<sum-mark<<"\n";
    }
    return 0;
}