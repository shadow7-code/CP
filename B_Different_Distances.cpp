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
        vector<int> per,res;
        int l=1,r=n;
        while(l<=r){
            per.push_back(l);
            if(l!=r)    per.push_back(r);
            l++;
            r--;
        }
        for(int x:per)  res.push_back(x);
        for(int x:per)  res.push_back(x);
        for(int i=1;i<n;i++)    res.push_back(per[i]);
        res.push_back(per[0]);
        for(int x:per)   res.push_back(x);
        for(int x:res)  cout<<x<<" ";
        cout<<"\n";
    }

    return 0;
}