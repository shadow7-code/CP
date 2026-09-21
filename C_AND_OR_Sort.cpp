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
        string s;
        cin>>s;
        int z=0,o=0,res=n;
        for(int i=0;i<n;i++)    if(s[i]=='0')    z++;
        if(s[0]=='1')   res=z;
        else{
            for(int i=0;i<n;i++){
                if(s[i]=='0')    z--;
                else             o++;
                res=min(res,o+z);
            }
        }
        cout<<res<<"\n";
    }
    return 0;
}