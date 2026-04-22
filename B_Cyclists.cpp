#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int n,k,p,m;
        cin>>n>>k>>p>>m;
        vector<int>a(n+1);
        for(int i=1;i<=n;i++)   cin>>a[i];

        multiset<int>opt;
        for(int i=1;i<=k-1;i++)     opt.insert(a[i]);

        for(int i=k;i<=p-1;i++){
            opt.insert(a[i]);
            m-=*opt.begin();
            opt.erase(opt.begin());
        }

        m-=a[p];
        if(m<0){
            cout<<0<<"\n";
            continue;
        }

        long long sum=a[p];
        opt.clear();

        for(int i=1;i<=n;i++){
            if(i!=p)opt.insert(a[i]);
        }

        for(int i=1;i<=n-k;i++){
            sum+=*opt.begin();
            opt.erase(opt.begin());
        }

        cout<<1+m/sum<<"\n";
    }
    return 0;
}