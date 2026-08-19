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
        vector<long long> b(n);
        map<long long,long long> freq;

        for(int i=0;i<n;i++){
            cin>>b[i];
            freq[b[i]]++;
        }
        if(!freq.count(0)){
            cout<<-1<<"\n";
            continue;
        }
        map<long long,long long> ans;
        long long prv=0,cnt=0,last=0;
        bool flag=true;

        for(auto p:freq){
            long long cur=p.first;
            long long f=p.second;
            if(cur!=0){
                long long diff=cur-prv;
                if(diff%cnt!=0){
                    flag=false;
                    break;
                }
                long long x=diff/cnt;
                if(x<=last){
                    flag=false;
                    break;
                }
                ans[prv]=x;
                last=x;
            }
            prv=cur;
            cnt=f;
        }
        if(!flag){
            cout<<-1<<"\n";
            continue;
        }
        ans[prv]=last+1;
        for(int i=0;i<n;i++){
            cout<<ans[b[i]];
            if(i<n-1) cout<<" ";
        }
        cout<<"\n";
    }
    return 0;
}