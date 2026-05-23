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
        vector<long long>a(n);
        for(int i=0;i<n;i++)    cin>>a[i];
        vector<int>ans;

        bool flip=false;
        for(int i=n-1;i>=0;i--){
            long long x=a[i];
            if(flip)    x=-x;
            if(x>0){
                ans.push_back(i+1);
                flip=!flip;
            }
        }
        cout<<ans.size()<<"\n";
        for(int x:ans)      cout<<x<<" ";
        cout<<"\n";
    }
    return 0;
}