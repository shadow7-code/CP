#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    vector<int> a(n+2,1);
    for(int i=2;i<=n+1;i++){
        for(int j=2*i;j<=n+1;j+=i){
            a[j]=2;
        }
    }

    if(n<=2) cout<<1<<"\n";
    else     cout<<2<<"\n";
    for(int i=2;i<=n+1;i++){
        cout<<a[i]<<" ";
    }

    return 0;
}