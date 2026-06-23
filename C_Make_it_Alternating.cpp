#include<bits/stdc++.h>
using namespace std;

const long long mod=998244353;

long long fact(int n){
    long long res=1;
    for(int i=1;i<=n;i++){
        res=(res*i)%mod;
    }
    return res;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        vector<int> arr;
        int cnt=0, len=1;
        for(int i=1;i<s.size();i++){
            if(s[i]==s[i-1]){
                cnt++;
                len++;
            }else{
                arr.push_back(len);
                len=1;
            }
        }
        arr.push_back(len);
        long long ways=1;
        for(int i=0;i<arr.size();i++)    ways=(ways*arr[i])%mod;
        ways=(ways*fact(cnt))%mod;
        cout<<cnt<<" "<<ways<<"\n";
    }
    return 0;
}