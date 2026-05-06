#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr(n);

        int maxi=0;
        bool flag=false;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            maxi=max(maxi,arr[i]);
            if(arr[i]==0)flag=true;
        }
        if(!flag){
            cout<<1LL*n*maxi<<"\n";
            continue;
        }

        bool done=false;
        vector<int>rem;
        for(int i=0;i<n;i++){
            if(arr[i]==maxi && !done){
                done=true;
                continue;
            }
            rem.push_back(arr[i]);
        }

        sort(rem.begin(),rem.end());

        vector<int>uni,dup;
        if(rem.size()){
            uni.push_back(rem[0]);
            for(int i=1;i<rem.size();i++){
                if(rem[i]==rem[i-1])    dup.push_back(rem[i]);
                else                    uni.push_back(rem[i]);
            }
        }

        long long res=1LL*n*maxi;
        vector<int>freq(n+2,0);
        int mex=0;

        if(maxi<=n+1)       freq[maxi]++;
        while(freq[mex])    mex++;
        res+=mex;

        for(int i=0;i<uni.size();i++){
            if(uni[i]<=n+1)     freq[uni[i]]++;
            while(freq[mex])    mex++;
            res+=mex;
        }

        for(int i=0;i<dup.size();i++){
            if(dup[i]<=n+1)     freq[dup[i]]++;
            while(freq[mex])    mex++;
            res+=mex;
        }
        cout<<res<<"\n";
    }
}