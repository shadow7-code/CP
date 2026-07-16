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
        vector<int> cnt(101,0);
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            cnt[abs(x)]++;
        }
        int res=0;
        if(cnt[0]) res++;
        for(int i=1;i<=100;i++){
            if(cnt[i]==1)       res++;
            else if(cnt[i]>=2)  res+=2;
        }
        cout<<res<<"\n";
    }

    return 0;
}