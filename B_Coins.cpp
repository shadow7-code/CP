#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    vector<int>ans;
    ans.push_back(n);
    while(n>1){
        for(int i=2;i<=n;i++){
            if(n%i==0){
                n/=i;
                ans.push_back(n);
                break;
            }
        }
    }

    for(int i=0;i<ans.size();i++){
        if(i)   cout<<" ";
        cout<<ans[i];
    }

    return 0;
}