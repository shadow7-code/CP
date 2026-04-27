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
        vector<long long>b(n);
        for(int i=0;i<n;i++)cin>>b[i];

        long long mini=b[0];
        bool flag=true;

        for(int i=1;i<n;i++){
            if(b[i]>2*mini-1){
                flag=false;
                break;
            }
            mini=min(mini,b[i]);
        }

        cout<<(flag?"YES":"NO")<<"\n";
    }
}