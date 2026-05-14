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

        int l=1,r=n;
        for(int i=0;i<n;i++){
            cout<<(i&1?l++:r--)<<" ";
        }
        cout<<"\n";
    }
}