#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        long long n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        long long a=0,b=0;
        for(int i=0;i<n;i++){
            if(s[i]=='1')    a++;
            else             b++;
        }
        long long x=min(k,b),y=min(k,a),res=1,ans=1;
        for(int i=0;i<a+x;i++)    res+=i+1;
        for(int i=0;i<b-x;i++)    res+=i+1;
        for(int i=0;i<a-y;i++)    ans+=i+1;
        for(int i=0;i<b+y;i++)    ans+=i+1;
        cout<<max(res,ans)<<'\n';
    }
    return 0;
}
