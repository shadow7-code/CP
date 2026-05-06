#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin>>t;
    while(t--) {
        int n,op=0,cl=0;
        string a,b;
        cin>>n>>a>>b;
        if(count(a.begin(),a.end(),'(')+count(b.begin(),b.end(),'(')!=n) {
            cout<<"NO\n";
            continue;
        }
        bool flag=true;
        for(int i=0;i<n;i++) {
            if(a[i]==b[i])  a[i]=='(' ? (op++,cl++) : (op--,cl--);
            else            op<=cl ? (op++,cl--) : (op--,cl++);
            if(op<0||cl<0)  {flag=false; break;}
        }
        cout<<(flag && !op && !cl ? "YES\n" : "NO\n");
    }
}