#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<long long> arr(n);
        for(int i=0;i<n;i++)    cin>>arr[i];
        long long res=LLONG_MIN;
        set<pair<long long,int>> st;
        long long sum=0;
        for(int i=0;i<n;i++){
            if(m==1)    res=max(res,arr[i]);
            else{
                if(st.size()==m-1)    res=max(res,m*arr[i]-sum);
                st.insert({arr[i],i});
                sum+=arr[i];
                if(st.size()>m-1){
                    sum-=st.rbegin()->first;
                    st.erase(prev(st.end()));
                }
            }
        }
        cout<<res<<"\n";
    }
    return 0;
}