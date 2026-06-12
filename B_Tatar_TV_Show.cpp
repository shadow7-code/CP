#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        bool flag=true;
        for(int i=0;i<k;i++){
            int ones=0;
            for(int j=i;j<n;j+=k)    if(s[j]=='1')  ones++;
            if(ones & 1){
                flag=false;
                break;
            }
        }
        cout<<(flag ? "YES\n" : "NO\n");
    }
    return 0;
}