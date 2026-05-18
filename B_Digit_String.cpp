#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int n=s.size();
        vector<int> suffy(n+1,0);
        for(int i=n-1;i>=0;i--){
            suffy[i]=suffy[i+1];
            if(s[i]=='1' || s[i]=='3'){
                suffy[i]++;
            }
        }

        int two=0, res=0;
        for(int i=0;i<n;i++){
            if(s[i]=='2')    two++;
            int cur=two+suffy[i+1];
            if(cur>res)    res=cur;
        }
        if(suffy[0]>res)    res=suffy[0];
        cout<<n-res<<"\n";
    }
}