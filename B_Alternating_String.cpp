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
        int c=0;
        for(int i=0;i<n-1;i++)  if(s[i]==s[i+1])     c++;
        cout<<(c<=2?"YES\n":"NO\n");
    }
}